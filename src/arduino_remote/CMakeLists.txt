cmake_minimum_required(VERSION 3.8)
project(arduino_remote)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(arduino_msgs REQUIRED)
find_package(rclpy REQUIRED)

find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_planners REQUIRED)
find_package(moveit_ros_planning REQUIRED)


add_library(arduino_task_server SHARED src/arduino_task_server.cpp)

target_include_directories(arduino_task_server PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_definitions(arduino_task_server
  PRIVATE "ARDUINO_TASK_SERVER_CPP_BUILDING_DLL")

ament_target_dependencies(arduino_task_server
  "arduino_msgs"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components"
  "moveit_ros_planning_interface")
  
rclcpp_components_register_node(arduino_task_server 
  PLUGIN "arduino_remote::ArduinoTaskServer" 
  EXECUTABLE arduino_task_server_node
)

ament_python_install_package(${PROJECT_NAME})

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

install(TARGETS
  arduino_task_server
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(PROGRAMS
  ${PROJECT_NAME}/arduino_alexa_interface.py 
  ${PROJECT_NAME}/arduino_task_server.py
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
