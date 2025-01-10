// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arduino_msgs:action/ArduinoTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__TRAITS_HPP_
#define ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arduino_msgs/action/detail/arduino_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: arduino_task_number
  {
    out << "arduino_task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_task_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arduino_task_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arduino_task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_task_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_Goal & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_Goal>()
{
  return "arduino_msgs::action::ArduinoTask_Goal";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_Goal>()
{
  return "arduino_msgs/action/ArduinoTask_Goal";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: arduino_success
  {
    out << "arduino_success: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arduino_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arduino_success: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_Result & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_Result>()
{
  return "arduino_msgs::action::ArduinoTask_Result";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_Result>()
{
  return "arduino_msgs/action/ArduinoTask_Result";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: arduino_percentage
  {
    out << "arduino_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arduino_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arduino_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_Feedback & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_Feedback>()
{
  return "arduino_msgs::action::ArduinoTask_Feedback";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_Feedback>()
{
  return "arduino_msgs/action/ArduinoTask_Feedback";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "arduino_msgs/action/detail/arduino_task__traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_SendGoal_Request & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_SendGoal_Request>()
{
  return "arduino_msgs::action::ArduinoTask_SendGoal_Request";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_SendGoal_Request>()
{
  return "arduino_msgs/action/ArduinoTask_SendGoal_Request";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<arduino_msgs::action::ArduinoTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<arduino_msgs::action::ArduinoTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_SendGoal_Response & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_SendGoal_Response>()
{
  return "arduino_msgs::action::ArduinoTask_SendGoal_Response";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_SendGoal_Response>()
{
  return "arduino_msgs/action/ArduinoTask_SendGoal_Response";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_SendGoal>()
{
  return "arduino_msgs::action::ArduinoTask_SendGoal";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_SendGoal>()
{
  return "arduino_msgs/action/ArduinoTask_SendGoal";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<arduino_msgs::action::ArduinoTask_SendGoal_Request>::value &&
    has_fixed_size<arduino_msgs::action::ArduinoTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<arduino_msgs::action::ArduinoTask_SendGoal_Request>::value &&
    has_bounded_size<arduino_msgs::action::ArduinoTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<arduino_msgs::action::ArduinoTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<arduino_msgs::action::ArduinoTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduino_msgs::action::ArduinoTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_GetResult_Request & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_GetResult_Request>()
{
  return "arduino_msgs::action::ArduinoTask_GetResult_Request";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_GetResult_Request>()
{
  return "arduino_msgs/action/ArduinoTask_GetResult_Request";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "arduino_msgs/action/detail/arduino_task__traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_GetResult_Response & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_GetResult_Response>()
{
  return "arduino_msgs::action::ArduinoTask_GetResult_Response";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_GetResult_Response>()
{
  return "arduino_msgs/action/ArduinoTask_GetResult_Response";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<arduino_msgs::action::ArduinoTask_Result>::value> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<arduino_msgs::action::ArduinoTask_Result>::value> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_GetResult>()
{
  return "arduino_msgs::action::ArduinoTask_GetResult";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_GetResult>()
{
  return "arduino_msgs/action/ArduinoTask_GetResult";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<arduino_msgs::action::ArduinoTask_GetResult_Request>::value &&
    has_fixed_size<arduino_msgs::action::ArduinoTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<arduino_msgs::action::ArduinoTask_GetResult_Request>::value &&
    has_bounded_size<arduino_msgs::action::ArduinoTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<arduino_msgs::action::ArduinoTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<arduino_msgs::action::ArduinoTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduino_msgs::action::ArduinoTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "arduino_msgs/action/detail/arduino_task__traits.hpp"

namespace arduino_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ArduinoTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArduinoTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArduinoTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arduino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arduino_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduino_msgs::action::ArduinoTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduino_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduino_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const arduino_msgs::action::ArduinoTask_FeedbackMessage & msg)
{
  return arduino_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<arduino_msgs::action::ArduinoTask_FeedbackMessage>()
{
  return "arduino_msgs::action::ArduinoTask_FeedbackMessage";
}

template<>
inline const char * name<arduino_msgs::action::ArduinoTask_FeedbackMessage>()
{
  return "arduino_msgs/action/ArduinoTask_FeedbackMessage";
}

template<>
struct has_fixed_size<arduino_msgs::action::ArduinoTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<arduino_msgs::action::ArduinoTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arduino_msgs::action::ArduinoTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<arduino_msgs::action::ArduinoTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arduino_msgs::action::ArduinoTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<arduino_msgs::action::ArduinoTask>
  : std::true_type
{
};

template<>
struct is_action_goal<arduino_msgs::action::ArduinoTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<arduino_msgs::action::ArduinoTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<arduino_msgs::action::ArduinoTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__TRAITS_HPP_
