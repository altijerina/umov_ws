// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_
#define ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_msgs/srv/detail/euler_to_quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_msgs
{

namespace srv
{

namespace builder
{

class Init_EulerToQuaternion_Request_yaw
{
public:
  explicit Init_EulerToQuaternion_Request_yaw(::arduino_msgs::srv::EulerToQuaternion_Request & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::srv::EulerToQuaternion_Request yaw(::arduino_msgs::srv::EulerToQuaternion_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Request msg_;
};

class Init_EulerToQuaternion_Request_pitch
{
public:
  explicit Init_EulerToQuaternion_Request_pitch(::arduino_msgs::srv::EulerToQuaternion_Request & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Request_yaw pitch(::arduino_msgs::srv::EulerToQuaternion_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerToQuaternion_Request_yaw(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Request msg_;
};

class Init_EulerToQuaternion_Request_roll
{
public:
  Init_EulerToQuaternion_Request_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuaternion_Request_pitch roll(::arduino_msgs::srv::EulerToQuaternion_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EulerToQuaternion_Request_pitch(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::srv::EulerToQuaternion_Request>()
{
  return arduino_msgs::srv::builder::Init_EulerToQuaternion_Request_roll();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace srv
{

namespace builder
{

class Init_EulerToQuaternion_Response_w
{
public:
  explicit Init_EulerToQuaternion_Response_w(::arduino_msgs::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::srv::EulerToQuaternion_Response w(::arduino_msgs::srv::EulerToQuaternion_Response::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_z
{
public:
  explicit Init_EulerToQuaternion_Response_z(::arduino_msgs::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Response_w z(::arduino_msgs::srv::EulerToQuaternion_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EulerToQuaternion_Response_w(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_y
{
public:
  explicit Init_EulerToQuaternion_Response_y(::arduino_msgs::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Response_z y(::arduino_msgs::srv::EulerToQuaternion_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EulerToQuaternion_Response_z(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_x
{
public:
  Init_EulerToQuaternion_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuaternion_Response_y x(::arduino_msgs::srv::EulerToQuaternion_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EulerToQuaternion_Response_y(msg_);
  }

private:
  ::arduino_msgs::srv::EulerToQuaternion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::srv::EulerToQuaternion_Response>()
{
  return arduino_msgs::srv::builder::Init_EulerToQuaternion_Response_x();
}

}  // namespace arduino_msgs

#endif  // ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_
