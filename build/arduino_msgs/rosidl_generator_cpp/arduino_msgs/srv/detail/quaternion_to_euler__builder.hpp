// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
#define ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_msgs/srv/detail/quaternion_to_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Request_w
{
public:
  explicit Init_QuaternionToEuler_Request_w(::arduino_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::srv::QuaternionToEuler_Request w(::arduino_msgs::srv::QuaternionToEuler_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_z
{
public:
  explicit Init_QuaternionToEuler_Request_z(::arduino_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_w z(::arduino_msgs::srv::QuaternionToEuler_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_QuaternionToEuler_Request_w(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_y
{
public:
  explicit Init_QuaternionToEuler_Request_y(::arduino_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_z y(::arduino_msgs::srv::QuaternionToEuler_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_QuaternionToEuler_Request_z(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_x
{
public:
  Init_QuaternionToEuler_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Request_y x(::arduino_msgs::srv::QuaternionToEuler_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_QuaternionToEuler_Request_y(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::srv::QuaternionToEuler_Request>()
{
  return arduino_msgs::srv::builder::Init_QuaternionToEuler_Request_x();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Response_yaw
{
public:
  explicit Init_QuaternionToEuler_Response_yaw(::arduino_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::srv::QuaternionToEuler_Response yaw(::arduino_msgs::srv::QuaternionToEuler_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_pitch
{
public:
  explicit Init_QuaternionToEuler_Response_pitch(::arduino_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Response_yaw pitch(::arduino_msgs::srv::QuaternionToEuler_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuaternionToEuler_Response_yaw(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_roll
{
public:
  Init_QuaternionToEuler_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Response_pitch roll(::arduino_msgs::srv::QuaternionToEuler_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuaternionToEuler_Response_pitch(msg_);
  }

private:
  ::arduino_msgs::srv::QuaternionToEuler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::srv::QuaternionToEuler_Response>()
{
  return arduino_msgs::srv::builder::Init_QuaternionToEuler_Response_roll();
}

}  // namespace arduino_msgs

#endif  // ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
