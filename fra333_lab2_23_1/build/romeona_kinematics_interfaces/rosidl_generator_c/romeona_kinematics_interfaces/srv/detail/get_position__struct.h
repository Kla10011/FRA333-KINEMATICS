// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
#define ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'q'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/GetPosition in the package romeona_kinematics_interfaces.
typedef struct romeona_kinematics_interfaces__srv__GetPosition_Request
{
  sensor_msgs__msg__JointState q;
} romeona_kinematics_interfaces__srv__GetPosition_Request;

// Struct for a sequence of romeona_kinematics_interfaces__srv__GetPosition_Request.
typedef struct romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence
{
  romeona_kinematics_interfaces__srv__GetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/GetPosition in the package romeona_kinematics_interfaces.
typedef struct romeona_kinematics_interfaces__srv__GetPosition_Response
{
  geometry_msgs__msg__Point p;
} romeona_kinematics_interfaces__srv__GetPosition_Response;

// Struct for a sequence of romeona_kinematics_interfaces__srv__GetPosition_Response.
typedef struct romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence
{
  romeona_kinematics_interfaces__srv__GetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
