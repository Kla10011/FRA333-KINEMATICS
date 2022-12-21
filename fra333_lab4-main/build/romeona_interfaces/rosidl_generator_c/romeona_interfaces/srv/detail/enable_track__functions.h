// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__FUNCTIONS_H_
#define ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "romeona_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "romeona_interfaces/srv/detail/enable_track__struct.h"

/// Initialize srv/EnableTrack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * romeona_interfaces__srv__EnableTrack_Request
 * )) before or use
 * romeona_interfaces__srv__EnableTrack_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__init(romeona_interfaces__srv__EnableTrack_Request * msg);

/// Finalize srv/EnableTrack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Request__fini(romeona_interfaces__srv__EnableTrack_Request * msg);

/// Create srv/EnableTrack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * romeona_interfaces__srv__EnableTrack_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
romeona_interfaces__srv__EnableTrack_Request *
romeona_interfaces__srv__EnableTrack_Request__create();

/// Destroy srv/EnableTrack message.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Request__destroy(romeona_interfaces__srv__EnableTrack_Request * msg);

/// Check for srv/EnableTrack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__are_equal(const romeona_interfaces__srv__EnableTrack_Request * lhs, const romeona_interfaces__srv__EnableTrack_Request * rhs);

/// Copy a srv/EnableTrack message.
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
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__copy(
  const romeona_interfaces__srv__EnableTrack_Request * input,
  romeona_interfaces__srv__EnableTrack_Request * output);

/// Initialize array of srv/EnableTrack messages.
/**
 * It allocates the memory for the number of elements and calls
 * romeona_interfaces__srv__EnableTrack_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__Sequence__init(romeona_interfaces__srv__EnableTrack_Request__Sequence * array, size_t size);

/// Finalize array of srv/EnableTrack messages.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Request__Sequence__fini(romeona_interfaces__srv__EnableTrack_Request__Sequence * array);

/// Create array of srv/EnableTrack messages.
/**
 * It allocates the memory for the array and calls
 * romeona_interfaces__srv__EnableTrack_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
romeona_interfaces__srv__EnableTrack_Request__Sequence *
romeona_interfaces__srv__EnableTrack_Request__Sequence__create(size_t size);

/// Destroy array of srv/EnableTrack messages.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Request__Sequence__destroy(romeona_interfaces__srv__EnableTrack_Request__Sequence * array);

/// Check for srv/EnableTrack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__Sequence__are_equal(const romeona_interfaces__srv__EnableTrack_Request__Sequence * lhs, const romeona_interfaces__srv__EnableTrack_Request__Sequence * rhs);

/// Copy an array of srv/EnableTrack messages.
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
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Request__Sequence__copy(
  const romeona_interfaces__srv__EnableTrack_Request__Sequence * input,
  romeona_interfaces__srv__EnableTrack_Request__Sequence * output);

/// Initialize srv/EnableTrack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * romeona_interfaces__srv__EnableTrack_Response
 * )) before or use
 * romeona_interfaces__srv__EnableTrack_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__init(romeona_interfaces__srv__EnableTrack_Response * msg);

/// Finalize srv/EnableTrack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Response__fini(romeona_interfaces__srv__EnableTrack_Response * msg);

/// Create srv/EnableTrack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * romeona_interfaces__srv__EnableTrack_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
romeona_interfaces__srv__EnableTrack_Response *
romeona_interfaces__srv__EnableTrack_Response__create();

/// Destroy srv/EnableTrack message.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Response__destroy(romeona_interfaces__srv__EnableTrack_Response * msg);

/// Check for srv/EnableTrack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__are_equal(const romeona_interfaces__srv__EnableTrack_Response * lhs, const romeona_interfaces__srv__EnableTrack_Response * rhs);

/// Copy a srv/EnableTrack message.
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
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__copy(
  const romeona_interfaces__srv__EnableTrack_Response * input,
  romeona_interfaces__srv__EnableTrack_Response * output);

/// Initialize array of srv/EnableTrack messages.
/**
 * It allocates the memory for the number of elements and calls
 * romeona_interfaces__srv__EnableTrack_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__Sequence__init(romeona_interfaces__srv__EnableTrack_Response__Sequence * array, size_t size);

/// Finalize array of srv/EnableTrack messages.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Response__Sequence__fini(romeona_interfaces__srv__EnableTrack_Response__Sequence * array);

/// Create array of srv/EnableTrack messages.
/**
 * It allocates the memory for the array and calls
 * romeona_interfaces__srv__EnableTrack_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
romeona_interfaces__srv__EnableTrack_Response__Sequence *
romeona_interfaces__srv__EnableTrack_Response__Sequence__create(size_t size);

/// Destroy array of srv/EnableTrack messages.
/**
 * It calls
 * romeona_interfaces__srv__EnableTrack_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
void
romeona_interfaces__srv__EnableTrack_Response__Sequence__destroy(romeona_interfaces__srv__EnableTrack_Response__Sequence * array);

/// Check for srv/EnableTrack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__Sequence__are_equal(const romeona_interfaces__srv__EnableTrack_Response__Sequence * lhs, const romeona_interfaces__srv__EnableTrack_Response__Sequence * rhs);

/// Copy an array of srv/EnableTrack messages.
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
ROSIDL_GENERATOR_C_PUBLIC_romeona_interfaces
bool
romeona_interfaces__srv__EnableTrack_Response__Sequence__copy(
  const romeona_interfaces__srv__EnableTrack_Response__Sequence * input,
  romeona_interfaces__srv__EnableTrack_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__FUNCTIONS_H_
