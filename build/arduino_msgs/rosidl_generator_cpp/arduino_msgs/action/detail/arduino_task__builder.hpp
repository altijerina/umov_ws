// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduino_msgs:action/ArduinoTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__BUILDER_HPP_
#define ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduino_msgs/action/detail/arduino_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_Goal_arduino_task_number
{
public:
  Init_ArduinoTask_Goal_arduino_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_msgs::action::ArduinoTask_Goal arduino_task_number(::arduino_msgs::action::ArduinoTask_Goal::_arduino_task_number_type arg)
  {
    msg_.arduino_task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_Goal>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_Goal_arduino_task_number();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_Result_arduino_success
{
public:
  Init_ArduinoTask_Result_arduino_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_msgs::action::ArduinoTask_Result arduino_success(::arduino_msgs::action::ArduinoTask_Result::_arduino_success_type arg)
  {
    msg_.arduino_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_Result>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_Result_arduino_success();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_Feedback_arduino_percentage
{
public:
  Init_ArduinoTask_Feedback_arduino_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_msgs::action::ArduinoTask_Feedback arduino_percentage(::arduino_msgs::action::ArduinoTask_Feedback::_arduino_percentage_type arg)
  {
    msg_.arduino_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_Feedback>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_Feedback_arduino_percentage();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_SendGoal_Request_goal
{
public:
  explicit Init_ArduinoTask_SendGoal_Request_goal(::arduino_msgs::action::ArduinoTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::action::ArduinoTask_SendGoal_Request goal(::arduino_msgs::action::ArduinoTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_SendGoal_Request msg_;
};

class Init_ArduinoTask_SendGoal_Request_goal_id
{
public:
  Init_ArduinoTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoTask_SendGoal_Request_goal goal_id(::arduino_msgs::action::ArduinoTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArduinoTask_SendGoal_Request_goal(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_SendGoal_Request>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_SendGoal_Request_goal_id();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_SendGoal_Response_stamp
{
public:
  explicit Init_ArduinoTask_SendGoal_Response_stamp(::arduino_msgs::action::ArduinoTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::action::ArduinoTask_SendGoal_Response stamp(::arduino_msgs::action::ArduinoTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_SendGoal_Response msg_;
};

class Init_ArduinoTask_SendGoal_Response_accepted
{
public:
  Init_ArduinoTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoTask_SendGoal_Response_stamp accepted(::arduino_msgs::action::ArduinoTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ArduinoTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_SendGoal_Response>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_SendGoal_Response_accepted();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_GetResult_Request_goal_id
{
public:
  Init_ArduinoTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduino_msgs::action::ArduinoTask_GetResult_Request goal_id(::arduino_msgs::action::ArduinoTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_GetResult_Request>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_GetResult_Request_goal_id();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_GetResult_Response_result
{
public:
  explicit Init_ArduinoTask_GetResult_Response_result(::arduino_msgs::action::ArduinoTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::action::ArduinoTask_GetResult_Response result(::arduino_msgs::action::ArduinoTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_GetResult_Response msg_;
};

class Init_ArduinoTask_GetResult_Response_status
{
public:
  Init_ArduinoTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoTask_GetResult_Response_result status(::arduino_msgs::action::ArduinoTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArduinoTask_GetResult_Response_result(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_GetResult_Response>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_GetResult_Response_status();
}

}  // namespace arduino_msgs


namespace arduino_msgs
{

namespace action
{

namespace builder
{

class Init_ArduinoTask_FeedbackMessage_feedback
{
public:
  explicit Init_ArduinoTask_FeedbackMessage_feedback(::arduino_msgs::action::ArduinoTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arduino_msgs::action::ArduinoTask_FeedbackMessage feedback(::arduino_msgs::action::ArduinoTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_FeedbackMessage msg_;
};

class Init_ArduinoTask_FeedbackMessage_goal_id
{
public:
  Init_ArduinoTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoTask_FeedbackMessage_feedback goal_id(::arduino_msgs::action::ArduinoTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArduinoTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::arduino_msgs::action::ArduinoTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduino_msgs::action::ArduinoTask_FeedbackMessage>()
{
  return arduino_msgs::action::builder::Init_ArduinoTask_FeedbackMessage_goal_id();
}

}  // namespace arduino_msgs

#endif  // ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__BUILDER_HPP_
