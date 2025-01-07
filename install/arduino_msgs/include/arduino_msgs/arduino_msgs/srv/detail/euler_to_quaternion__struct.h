// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduino_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_
#define ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EulerToQuaternion in the package arduino_msgs.
typedef struct arduino_msgs__srv__EulerToQuaternion_Request
{
  double roll;
  double pitch;
  double yaw;
} arduino_msgs__srv__EulerToQuaternion_Request;

// Struct for a sequence of arduino_msgs__srv__EulerToQuaternion_Request.
typedef struct arduino_msgs__srv__EulerToQuaternion_Request__Sequence
{
  arduino_msgs__srv__EulerToQuaternion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__srv__EulerToQuaternion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EulerToQuaternion in the package arduino_msgs.
typedef struct arduino_msgs__srv__EulerToQuaternion_Response
{
  double x;
  double y;
  double z;
  double w;
} arduino_msgs__srv__EulerToQuaternion_Response;

// Struct for a sequence of arduino_msgs__srv__EulerToQuaternion_Response.
typedef struct arduino_msgs__srv__EulerToQuaternion_Response__Sequence
{
  arduino_msgs__srv__EulerToQuaternion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduino_msgs__srv__EulerToQuaternion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_
