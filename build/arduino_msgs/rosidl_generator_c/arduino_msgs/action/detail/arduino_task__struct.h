// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduino_msgs:action/ArduinoTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__STRUCT_H_
#define ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_Goal
{
  int32_t arduino_task_number;
} arduino_msgs__action__ArduinoTask_Goal;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_Goal.
typedef struct arduino_msgs__action__ArduinoTask_Goal__Sequence
{
  arduino_msgs__action__ArduinoTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_Result
{
  bool arduino_success;
} arduino_msgs__action__ArduinoTask_Result;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_Result.
typedef struct arduino_msgs__action__ArduinoTask_Result__Sequence
{
  arduino_msgs__action__ArduinoTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_Feedback
{
  int32_t arduino_percentage;
} arduino_msgs__action__ArduinoTask_Feedback;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_Feedback.
typedef struct arduino_msgs__action__ArduinoTask_Feedback__Sequence
{
  arduino_msgs__action__ArduinoTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arduino_msgs/action/detail/arduino_task__struct.h"

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduino_msgs__action__ArduinoTask_Goal goal;
} arduino_msgs__action__ArduinoTask_SendGoal_Request;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_SendGoal_Request.
typedef struct arduino_msgs__action__ArduinoTask_SendGoal_Request__Sequence
{
  arduino_msgs__action__ArduinoTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arduino_msgs__action__ArduinoTask_SendGoal_Response;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_SendGoal_Response.
typedef struct arduino_msgs__action__ArduinoTask_SendGoal_Response__Sequence
{
  arduino_msgs__action__ArduinoTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arduino_msgs__action__ArduinoTask_GetResult_Request;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_GetResult_Request.
typedef struct arduino_msgs__action__ArduinoTask_GetResult_Request__Sequence
{
  arduino_msgs__action__ArduinoTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arduino_msgs/action/detail/arduino_task__struct.h"

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_GetResult_Response
{
  int8_t status;
  arduino_msgs__action__ArduinoTask_Result result;
} arduino_msgs__action__ArduinoTask_GetResult_Response;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_GetResult_Response.
typedef struct arduino_msgs__action__ArduinoTask_GetResult_Response__Sequence
{
  arduino_msgs__action__ArduinoTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arduino_msgs/action/detail/arduino_task__struct.h"

/// Struct defined in action/ArduinoTask in the package arduino_msgs.
typedef struct arduino_msgs__action__ArduinoTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduino_msgs__action__ArduinoTask_Feedback feedback;
} arduino_msgs__action__ArduinoTask_FeedbackMessage;

// Struct for a sequence of arduino_msgs__action__ArduinoTask_FeedbackMessage.
typedef struct arduino_msgs__action__ArduinoTask_FeedbackMessage__Sequence
{
  arduino_msgs__action__ArduinoTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__action__ArduinoTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_MSGS__ACTION__DETAIL__ARDUINO_TASK__STRUCT_H_
