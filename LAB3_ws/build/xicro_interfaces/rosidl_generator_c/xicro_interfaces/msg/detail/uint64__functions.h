// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xicro_interfaces:msg/Uint64.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__UINT64__FUNCTIONS_H_
#define XICRO_INTERFACES__MSG__DETAIL__UINT64__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xicro_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xicro_interfaces/msg/detail/uint64__struct.h"

/// Initialize msg/Uint64 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xicro_interfaces__msg__Uint64
 * )) before or use
 * xicro_interfaces__msg__Uint64__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
bool
xicro_interfaces__msg__Uint64__init(xicro_interfaces__msg__Uint64 * msg);

/// Finalize msg/Uint64 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Uint64__fini(xicro_interfaces__msg__Uint64 * msg);

/// Create msg/Uint64 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xicro_interfaces__msg__Uint64__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
xicro_interfaces__msg__Uint64 *
xicro_interfaces__msg__Uint64__create();

/// Destroy msg/Uint64 message.
/**
 * It calls
 * xicro_interfaces__msg__Uint64__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Uint64__destroy(xicro_interfaces__msg__Uint64 * msg);


/// Initialize array of msg/Uint64 messages.
/**
 * It allocates the memory for the number of elements and calls
 * xicro_interfaces__msg__Uint64__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
bool
xicro_interfaces__msg__Uint64__Sequence__init(xicro_interfaces__msg__Uint64__Sequence * array, size_t size);

/// Finalize array of msg/Uint64 messages.
/**
 * It calls
 * xicro_interfaces__msg__Uint64__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Uint64__Sequence__fini(xicro_interfaces__msg__Uint64__Sequence * array);

/// Create array of msg/Uint64 messages.
/**
 * It allocates the memory for the array and calls
 * xicro_interfaces__msg__Uint64__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
xicro_interfaces__msg__Uint64__Sequence *
xicro_interfaces__msg__Uint64__Sequence__create(size_t size);

/// Destroy array of msg/Uint64 messages.
/**
 * It calls
 * xicro_interfaces__msg__Uint64__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xicro_interfaces
void
xicro_interfaces__msg__Uint64__Sequence__destroy(xicro_interfaces__msg__Uint64__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__UINT64__FUNCTIONS_H_
