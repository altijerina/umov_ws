import rclpy
from rclpy.logging import get_logger
import numpy as np
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState

def move_robot():
    arduino = MoveItPy(node_name = "moveit_py")
    arduino_arm = arduino.get_planning_component("arm")
    arduino_gripper = arduino.get_planning_component("gripper")
    
    arm_state = RobotState(arduino.get_robot_model())
    gripper_state = RobotState(arduino.get_robot_model())
    
    arm_state.set_joint_group_positions("arm", np.array([1.503, -0.331, 0.858, -0.569]))
    gripper_state.set_joint_group_positions("gripper", np.array([-0.651, 0.651]))
    
    arduino_arm.set_start_state_to_current_state()
    arduino_gripper.set_start_state_to_current_state()
    
    arduino_arm.set_goal_state(robot_state = arm_state)
    arduino_gripper.set_goal_state(robot_state = gripper_state)
    
    arm_plan_result = arduino_arm.plan()
    gripper_plan_result = arduino_gripper.plan()
    
    if arm_plan_result:
        arduino.execute(arm_plan_result.trajectory, controllers = [])
    else:
        get_logger("rclpy").error("Arm plan failed.")
        
    if gripper_plan_result:
        arduino.execute(gripper_plan_result.trajectory, controllers = [])
    else:
        get_logger("rclpy").error("Gripper plan failed.")        
        
def main():
    rclpy.init()
    move_robot()
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()