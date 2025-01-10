#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <arduino_msgs/action/arduino_task.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

#include <memory>
#include <thread>

using namespace std::placeholders;
using ArduinoRobotTask = arduino_msgs::action::ArduinoTask;
using ArduinoGoalHandle = rclcpp_action::ServerGoalHandle<ArduinoRobotTask>;

namespace arduino_remote
{
class ArduinoTaskServer : public rclcpp::Node
{
public:
  explicit ArduinoTaskServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
    : Node("arduino_task_server", options)
  {
    RCLCPP_INFO(get_logger(), "Starting the Server");
    arduino_action_server_ = rclcpp_action::create_server<ArduinoRobotTask>(
        this, "arduino_task_server", std::bind(&ArduinoTaskServer::arduinoGoalCallback, this, _1, _2),
        std::bind(&ArduinoTaskServer::arduinoCancelCallback, this, _1),
        std::bind(&ArduinoTaskServer::arduinoAcceptedCallback, this, _1));
  }

private:
  rclcpp_action::Server<ArduinoRobotTask>::SharedPtr arduino_action_server_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arduino_arm_move_group;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arduino_gripper_move_group;
  std::vector<double> arduino_arm_joint_goal;
  std::vector<double> arduino_gripper_joint_goal;

  rclcpp_action::GoalResponse arduinoGoalCallback(
      const rclcpp_action::GoalUUID& arduino_uuid,
      std::shared_ptr<const ArduinoRobotTask::Goal> arduino_goal)
  {
    RCLCPP_INFO(get_logger(), "Received goal request with arduino_task_number: %d", arduino_goal->arduino_task_number);
    (void)arduino_uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse arduinoCancelCallback(
    const std::shared_ptr<ArduinoGoalHandle> arduino_goal_handle)
  {
    RCLCPP_INFO(get_logger(), "Received request to cancel goal");
    if (arduino_arm_move_group){
      arduino_arm_move_group->stop();
    }
    if (arduino_gripper_move_group){
      arduino_gripper_move_group->stop();
    }
    (void)arduino_goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void arduinoAcceptedCallback(
      const std::shared_ptr<ArduinoGoalHandle> arduino_goal_handle)
  {
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{ std::bind(&ArduinoTaskServer::execute, this, _1), arduino_goal_handle}.detach();
  }

  void execute(const std::shared_ptr<ArduinoGoalHandle> arduino_goal_handle)
  {
    RCLCPP_INFO(get_logger(), "Executing goal");
    if(!arduino_arm_move_group){
      arduino_arm_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "arm");
    }
    if(!arduino_gripper_move_group){
      arduino_gripper_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "gripper");
    }

    if(arduino_goal_handle->get_goal()->arduino_task_number == 0) //Home position
    {
      arduino_arm_joint_goal = {0.0, 0.0, 0.0, 0.0};
      arduino_gripper_joint_goal = {0.0};
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 1) //Arm Ready Low Left
    {
      arduino_arm_joint_goal = {-1.061, -1.486, 0.858, 0.671};
      arduino_gripper_joint_goal = {-0.7} ;      
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 2) //Arm Ready Low Right
    {
      arduino_arm_joint_goal = {1.299, -1.486, 0.858, 0.671};
      arduino_gripper_joint_goal = {-0.1} ;      
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 3) //Arm Ready High Left
    {
      arduino_arm_joint_goal = {-1.061, -0.331, 0.858, -0.569};
      arduino_gripper_joint_goal = {-0.7} ;      
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 4) //Arm Ready High Right
    {
      arduino_arm_joint_goal = {1.503, -0.331, 0.858, -0.569};
      arduino_gripper_joint_goal = {-0.1} ;      
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 5) //Arm Ready Low Center
    {
      arduino_arm_joint_goal = {0.042, -1.316, 0.484, 0.841};
      arduino_gripper_joint_goal = {-0.7} ;      
    }
    else if(arduino_goal_handle->get_goal()->arduino_task_number == 6) //Arm Ready High Center
    {
      arduino_arm_joint_goal = {0.042, -0.314, 0.841, -0.569};
      arduino_gripper_joint_goal = {-0.1} ;      
    }
    else
    {
      RCLCPP_ERROR(get_logger(), "Invalid task number");    
      return;
    }

    arduino_arm_move_group->setStartState(*arduino_arm_move_group->getCurrentState());
    arduino_gripper_move_group->setStartState(*arduino_gripper_move_group->getCurrentState());

    bool arm_within_bounds = arduino_arm_move_group->setJointValueTarget(arduino_arm_joint_goal);
    bool gripper_within_bounds = arduino_gripper_move_group->setJointValueTarget(arduino_gripper_joint_goal);

    if (!arm_within_bounds)
    {
      RCLCPP_ERROR(get_logger(), "ARM Target joint position outside of limits.");
      return;
    }

    if (!gripper_within_bounds)
    {
      RCLCPP_ERROR(get_logger(), "GRIPPER Target joint position outside of limits.");
      return;
    }     

    moveit::planning_interface::MoveGroupInterface::Plan arduino_arm_plan;
    moveit::planning_interface::MoveGroupInterface::Plan arduino_gripper_plan;

    bool arduino_arm_plan_success = (arduino_arm_move_group->plan(arduino_arm_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    bool arduino_gripper_plan_success = (arduino_gripper_move_group->plan(arduino_gripper_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (arduino_arm_plan_success)
    {
        RCLCPP_INFO(get_logger(), "Planner Succeeded in moving the arm.");
        arduino_arm_move_group->move();       
    }
    else
    {
      RCLCPP_ERROR(get_logger(), "Arm planner failed!");
      return;
    }     

    if (arduino_gripper_plan_success)
    {
        RCLCPP_INFO(get_logger(), "Planner Succeeded in moving the gripper.");        
        arduino_gripper_move_group->move();       
    }    
    else
    {
      RCLCPP_ERROR(get_logger(), "Gripper planner failed!");
      return;
    }    

    auto result = std::make_shared<ArduinoRobotTask::Result>();
    result->arduino_success = true;
    arduino_goal_handle->succeed(result);
    RCLCPP_INFO(get_logger(), "Goal succeeded.");

  }
};
}  // namespace arduino_task

RCLCPP_COMPONENTS_REGISTER_NODE(arduino_remote::ArduinoTaskServer)