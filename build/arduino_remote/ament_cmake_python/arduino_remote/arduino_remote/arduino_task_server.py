#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from arduino_msgs.action import ArduinobotTask     
import numpy as np
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState


class TaskServer(Node):
    def __init__(self):
        super().__init__("arduino_task_server")
        self.get_logger().info("Starting the Server")
        self.action_server = ActionServer(
            self, ArduinobotTask, "arduino_task_server", self.goalCallback
        )
        self.arduinobot = MoveItPy(node_name="moveit_py")
        self.arduinobot_arm = self.arduinobot.get_planning_component("arm")
        self.arduinobot_gripper = self.arduinobot.get_planning_component("gripper")

    def goalCallback(self, goal_handle):
        self.get_logger().info(
            "Received goal request with task_number %d" % goal_handle.request.task_number
        )

        arm_state = RobotState(self.arduinobot.get_robot_model())
        gripper_state = RobotState(self.arduinobot.get_robot_model())
        
        arm_joint_goal = []
        gripper_joint_goal = []
        
        if goal_handle.request.task_number == 0:  #Home position
            arm_joint_goal = np.array(0.0, 0.0, 0.0, 0.0)
            gripper_joint_goal = np.array(0.0)
        elif goal_handle.request.task_number == 1: #Arm Ready Low Left
            arm_joint_goal = np.array(-1.061, -1.486, 0.858, 0.671)
            gripper_joint_goal = np.array(-0.7)
        elif goal_handle.request.task_number == 2: #Arm Ready Low Right
            arm_joint_goal = np.array(1.299, -1.486, 0.858, 0.671)
            gripper_joint_goal = np.array(-0.7)
        elif goal_handle.request.task_number == 3: #Arm Ready High Left
            arm_joint_goal = np.array(-1.061, -0.331, 0.858, -0.569)
            gripper_joint_goal = np.array(-0.2)
        elif goal_handle.request.task_number == 4: #Arm Ready High Right
            arm_joint_goal = np.array(1.503, -0.331, 0.858, -0.569)
            gripper_joint_goal = np.array(-0.7)
        elif goal_handle.request.task_number == 5: #Arm Ready Center Low
            arm_joint_goal = np.array(0.042, -1.316, 0.484, 0.841)
            gripper_joint_goal = np.array(-0.9)
        elif goal_handle.request.task_number == 6: #Arm Ready Center High
            arm_joint_goal = np.array(0.042, -0.314, 0.841, -0.569)
            gripper_joint_goal = np.array(-0.7)
        else:
            self.get_logger().error("Invalid task number.")
            return
            
            
        arm_state.set_joint_group_positions("arm", arm_joint_goal)
        gripper_state.set_joint_group_positions("gripper",gripper_joint_goal)
        
        self.arduinobot_arm.set_start_state_to_current_state()
        self.arduinobot_gripper.set_start_state_to_current_state()
        
        self.arduinobot_arm.set_goal_state(robot_state=arm_state)
        self.arduinobot_gripper.set_goal_state(robot_state=gripper_state)
        
        arm_plan_result = self.arduinobot_arm.plan()
        gripper_plan_result = self.arduinobot_gripper.plan()
        
        if arm_plan_result:
            self.arduinobot.execute(arm_plan_result.trajectory, controllers = [])
        else:
            self.get_logger().info("Arm Planner Failed.")
        if gripper_plan_result:
            self.arduinobot.execute(gripper_plan_result.trajectory, controllers = [])
        else:
            self.get_logger().info("Gripper Planner Failed.")
            
        goal_handle.succeed()
        result = ArduinobotTask.Result()
        result.success = True
        return result


def main(args=None):
    rclpy.init(args=args)
    arduino_task_server = TaskServer()
    rclpy.spin(arduino_task_server)


if __name__ == "__main__":
    main()