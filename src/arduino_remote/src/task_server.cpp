#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <arduino_msgs/action/arduino_task.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

#include <memory>
#include <thread>

using namespace std::placeholders;
using RobotTask = arduino_msgs::action::ArduinoTask;
using RobotGoalHandle = rclcpp_action::ServerGoalHandle<RobotTask>;

namespace arduino_remote
{
class TaskServer : public rclcpp::Node
{
public:
  explicit TaskServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
    : Node("task_server", options)
  {
    RCLCPP_INFO(get_logger(), "Starting the Server");
    action_server_ = rclcpp_action::create_server<RobotTask>(
        this, "task_server", std::bind(&TaskServer::goalCallback, this, _1, _2),
        std::bind(&TaskServer::cancelCallback, this, _1),
        std::bind(&TaskServer::acceptedCallback, this, _1));
  }

private:
  rclcpp_action::Server<RobotTask>::SharedPtr action_server_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arm_move_group_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> gripper_move_group_;
  std::vector<double> arm_joint_goal_;
  std::vector<double> gripper_joint_goal_;

  rclcpp_action::GoalResponse goalCallback(
      const rclcpp_action::GoalUUID& uuid,
      std::shared_ptr<const RobotTask::Goal> goal)
  {
    RCLCPP_INFO(get_logger(), "Received goal request with task_number: %d", goal->task_number);
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse cancelCallback(
    const std::shared_ptr<RobotGoalHandle> goal_handle)
  {
    RCLCPP_INFO(get_logger(), "Received request to cancel goal");
    if (arm_move_group_){
      arm_move_group_->stop();
    }
    if (gripper_move_group_){
      gripper_move_group_->stop();
    }
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void acceptedCallback(
      const std::shared_ptr<RobotGoalHandle> goal_handle)
  {
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{ std::bind(&TaskServer::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<RobotGoalHandle> goal_handle)
  {
    RCLCPP_INFO(get_logger(), "Executing goal");
    if(!arm_move_group_){
      arm_move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "arm");
    }
    if(!gripper_move_group_){
      gripper_move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "gripper");
    }

    if(goal_handle->get_goal()->task_number == 0) //Home position
    {
      arm_joint_goal_ = {0.0, 0.0, 0.0, 0.0};
      gripper_joint_goal_ = {0.0};
    }
    else if(goal_handle->get_goal()->task_number == 1) //Arm Ready Low Left
    {
      arm_joint_goal_ = {-1.061, -1.486, 0.858, 0.671};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else if(goal_handle->get_goal()->task_number == 2) //Arm Ready Low Right
    {
      arm_joint_goal_ = {1.299, -1.486, 0.858, 0.671};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else if(goal_handle->get_goal()->task_number == 3) //Arm Ready High Left
    {
      arm_joint_goal_ = {-1.061, -0.331, 0.858, -0.569};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else if(goal_handle->get_goal()->task_number == 4) //Arm Ready High Right
    {
      arm_joint_goal_ = {1.503, -0.331, 0.858, -0.569};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else if(goal_handle->get_goal()->task_number == 5) //Arm Ready Low Center
    {
      arm_joint_goal_ = {0.042, -1.316, 0.484, 0.841};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else if(goal_handle->get_goal()->task_number == 6) //Arm Ready High Center
    {
      arm_joint_goal_ = {0.042, -0.314, 0.841, -0.569};
      gripper_joint_goal_ = {-0.7} ;      
    }
    else
    {
      RCLCPP_ERROR(get_logger(), "Invalid task number");    
      return;
    }

    arm_move_group_->setStartState(*arm_move_group_->getCurrentState());
    gripper_move_group_->setStartState(*gripper_move_group_->getCurrentState());

    bool arm_within_bounds = arm_move_group_->setJointValueTarget(arm_joint_goal_);
    bool gripper_within_bounds = gripper_move_group_->setJointValueTarget(gripper_joint_goal_);

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

    moveit::planning_interface::MoveGroupInterface::Plan arm_plan;
    moveit::planning_interface::MoveGroupInterface::Plan gripper_plan;

    bool arm_plan_success = (arm_move_group_->plan(arm_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    bool gripper_plan_success = (gripper_move_group_->plan(gripper_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (arm_plan_success)
    {
        RCLCPP_INFO(get_logger(), "Planner Succeeded in moving the arm.");
        arm_move_group_->move();       
    }
    else
    {
      RCLCPP_ERROR(get_logger(), "Arm planner failed!");
      return;
    }     

    if (gripper_plan_success)
    {
        RCLCPP_INFO(get_logger(), "Planner Succeeded in moving the gripper.");        
        gripper_move_group_->move();       
    }    
    else
    {
      RCLCPP_ERROR(get_logger(), "Gripper planner failed!");
      return;
    }    

    auto result = std::make_shared<RobotTask::Result>();
    result->success = true;
    goal_handle->succeed(result);
    RCLCPP_INFO(get_logger(), "Goal succeeded.");

  }
};
}  // namespace arduino_task

RCLCPP_COMPONENTS_REGISTER_NODE(arduino_remote::TaskServer)