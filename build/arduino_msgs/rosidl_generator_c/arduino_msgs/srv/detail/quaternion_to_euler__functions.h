// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arduino_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_
#define ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arduino_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "arduino_msgs/srv/detail/quaternion_to_euler__struct.h"

/// Initialize srv/QuaternionToEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arduino_msgs__srv__QuaternionToEuler_Request
 * )) before or use
 * arduino_msgs__srv__QuaternionToEuler_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__init(arduino_msgs__srv__QuaternionToEuler_Request * msg);

/// Finalize srv/QuaternionToEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Request__fini(arduino_msgs__srv__QuaternionToEuler_Request * msg);

/// Create srv/QuaternionToEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arduino_msgs__srv__QuaternionToEuler_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
arduino_msgs__srv__QuaternionToEuler_Request *
arduino_msgs__srv__QuaternionToEuler_Request__create();

/// Destroy srv/QuaternionToEuler message.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Request__destroy(arduino_msgs__srv__QuaternionToEuler_Request * msg);

/// Check for srv/QuaternionToEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__are_equal(const arduino_msgs__srv__QuaternionToEuler_Request * lhs, const arduino_msgs__srv__QuaternionToEuler_Request * rhs);

/// Copy a srv/QuaternionToEuler message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__copy(
  const arduino_msgs__srv__QuaternionToEuler_Request * input,
  arduino_msgs__srv__QuaternionToEuler_Request * output);

/// Initialize array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * arduino_msgs__srv__QuaternionToEuler_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__init(arduino_msgs__srv__QuaternionToEuler_Request__Sequence * array, size_t size);

/// Finalize array of srv/QuaternionToEuler messages.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__fini(arduino_msgs__srv__QuaternionToEuler_Request__Sequence * array);

/// Create array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the array and calls
 * arduino_msgs__srv__QuaternionToEuler_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
arduino_msgs__srv__QuaternionToEuler_Request__Sequence *
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__create(size_t size);

/// Destroy array of srv/QuaternionToEuler messages.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__destroy(arduino_msgs__srv__QuaternionToEuler_Request__Sequence * array);

/// Check for srv/QuaternionToEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__are_equal(const arduino_msgs__srv__QuaternionToEuler_Request__Sequence * lhs, const arduino_msgs__srv__QuaternionToEuler_Request__Sequence * rhs);

/// Copy an array of srv/QuaternionToEuler messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Request__Sequence__copy(
  const arduino_msgs__srv__QuaternionToEuler_Request__Sequence * input,
  arduino_msgs__srv__QuaternionToEuler_Request__Sequence * output);

/// Initialize srv/QuaternionToEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arduino_msgs__srv__QuaternionToEuler_Response
 * )) before or use
 * arduino_msgs__srv__QuaternionToEuler_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__init(arduino_msgs__srv__QuaternionToEuler_Response * msg);

/// Finalize srv/QuaternionToEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Response__fini(arduino_msgs__srv__QuaternionToEuler_Response * msg);

/// Create srv/QuaternionToEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arduino_msgs__srv__QuaternionToEuler_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
arduino_msgs__srv__QuaternionToEuler_Response *
arduino_msgs__srv__QuaternionToEuler_Response__create();

/// Destroy srv/QuaternionToEuler message.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Response__destroy(arduino_msgs__srv__QuaternionToEuler_Response * msg);

/// Check for srv/QuaternionToEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__are_equal(const arduino_msgs__srv__QuaternionToEuler_Response * lhs, const arduino_msgs__srv__QuaternionToEuler_Response * rhs);

/// Copy a srv/QuaternionToEuler message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__copy(
  const arduino_msgs__srv__QuaternionToEuler_Response * input,
  arduino_msgs__srv__QuaternionToEuler_Response * output);

/// Initialize array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * arduino_msgs__srv__QuaternionToEuler_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__init(arduino_msgs__srv__QuaternionToEuler_Response__Sequence * array, size_t size);

/// Finalize array of srv/QuaternionToEuler messages.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__fini(arduino_msgs__srv__QuaternionToEuler_Response__Sequence * array);

/// Create array of srv/QuaternionToEuler messages.
/**
 * It allocates the memory for the array and calls
 * arduino_msgs__srv__QuaternionToEuler_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
arduino_msgs__srv__QuaternionToEuler_Response__Sequence *
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__create(size_t size);

/// Destroy array of srv/QuaternionToEuler messages.
/**
 * It calls
 * arduino_msgs__srv__QuaternionToEuler_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
void
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__destroy(arduino_msgs__srv__QuaternionToEuler_Response__Sequence * array);

/// Check for srv/QuaternionToEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__are_equal(const arduino_msgs__srv__QuaternionToEuler_Response__Sequence * lhs, const arduino_msgs__srv__QuaternionToEuler_Response__Sequence * rhs);

/// Copy an array of srv/QuaternionToEuler messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arduino_msgs
bool
arduino_msgs__srv__QuaternionToEuler_Response__Sequence__copy(
  const arduino_msgs__srv__QuaternionToEuler_Response__Sequence * input,
  arduino_msgs__srv__QuaternionToEuler_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARDUINO_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__FUNCTIONS_H_
