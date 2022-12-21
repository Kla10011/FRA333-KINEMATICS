// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_H_
#define ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 's'
#include "std_msgs/msg/detail/bool__struct.h"

// Struct defined in srv/EnableTrack in the package romeona_interfaces.
typedef struct romeona_interfaces__srv__EnableTrack_Request
{
  std_msgs__msg__Bool s;
} romeona_interfaces__srv__EnableTrack_Request;

// Struct for a sequence of romeona_interfaces__srv__EnableTrack_Request.
typedef struct romeona_interfaces__srv__EnableTrack_Request__Sequence
{
  romeona_interfaces__srv__EnableTrack_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} romeona_interfaces__srv__EnableTrack_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/EnableTrack in the package romeona_interfaces.
typedef struct romeona_interfaces__srv__EnableTrack_Response
{
  uint8_t structure_needs_at_least_one_member;
} romeona_interfaces__srv__EnableTrack_Response;

// Struct for a sequence of romeona_interfaces__srv__EnableTrack_Response.
typedef struct romeona_interfaces__srv__EnableTrack_Response__Sequence
{
  romeona_interfaces__srv__EnableTrack_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} romeona_interfaces__srv__EnableTrack_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__STRUCT_H_
