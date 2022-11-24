// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xicro_interfaces:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TIME__FUNCTIONS_H_
#define XICRO_INTERFACES__MSG__DETAIL__TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xicro_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xicro_interfaces/msg/detail/time__struct.h"

/// Initialize msg/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xicro_interfaces__msg__Time
 * )) before or use
 * xicro_interfaces__msg__Time__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
bool
xicro_interfaces__msg__Time__init(xicro_interfaces__msg__Time * msg);

/// Finalize msg/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Time__fini(xicro_interfaces__msg__Time * msg);

/// Create msg/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xicro_interfaces__msg__Time__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
xicro_interfaces__msg__Time *
xicro_interfaces__msg__Time__create();

/// Destroy msg/Time message.
/**
 * It calls
 * xicro_interfaces__msg__Time__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Time__destroy(xicro_interfaces__msg__Time * msg);


/// Initialize array of msg/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * xicro_interfaces__msg__Time__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
bool
xicro_interfaces__msg__Time__Sequence__init(xicro_interfaces__msg__Time__Sequence * array, size_t size);

/// Finalize array of msg/Time messages.
/**
 * It calls
 * xicro_interfaces__msg__Time__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Time__Sequence__fini(xicro_interfaces__msg__Time__Sequence * array);

/// Create array of msg/Time messages.
/**
 * It allocates the memory for the array and calls
 * xicro_interfaces__msg__Time__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
xicro_interfaces__msg__Time__Sequence *
xicro_interfaces__msg__Time__Sequence__create(size_t size);

/// Destroy array of msg/Time messages.
/**
 * It calls
 * xicro_interfaces__msg__Time__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Time__Sequence__destroy(xicro_interfaces__msg__Time__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__TIME__FUNCTIONS_H_
