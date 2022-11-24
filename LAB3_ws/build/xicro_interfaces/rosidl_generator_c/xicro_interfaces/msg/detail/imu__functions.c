// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "xicro_interfaces/msg/detail/header__functions.h"
// Member `orientation`
#include "xicro_interfaces/msg/detail/quaternion__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "xicro_interfaces/msg/detail/vector3__functions.h"

bool
xicro_interfaces__msg__Imu__init(xicro_interfaces__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!xicro_interfaces__msg__Header__init(&msg->header)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // orientation
  if (!xicro_interfaces__msg__Quaternion__init(&msg->orientation)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // orientation_covariance
  // angular_velocity
  if (!xicro_interfaces__msg__Vector3__init(&msg->angular_velocity)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // angular_velocity_covariance
  // linear_acceleration
  if (!xicro_interfaces__msg__Vector3__init(&msg->linear_acceleration)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // linear_acceleration_covariance
  return true;
}

void
xicro_interfaces__msg__Imu__fini(xicro_interfaces__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // header
  xicro_interfaces__msg__Header__fini(&msg->header);
  // orientation
  xicro_interfaces__msg__Quaternion__fini(&msg->orientation);
  // orientation_covariance
  // angular_velocity
  xicro_interfaces__msg__Vector3__fini(&msg->angular_velocity);
  // angular_velocity_covariance
  // linear_acceleration
  xicro_interfaces__msg__Vector3__fini(&msg->linear_acceleration);
  // linear_acceleration_covariance
}

xicro_interfaces__msg__Imu *
xicro_interfaces__msg__Imu__create()
{
  xicro_interfaces__msg__Imu * msg = (xicro_interfaces__msg__Imu *)malloc(sizeof(xicro_interfaces__msg__Imu));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Imu));
  bool success = xicro_interfaces__msg__Imu__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Imu__destroy(xicro_interfaces__msg__Imu * msg)
{
  if (msg) {
    xicro_interfaces__msg__Imu__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__Imu__Sequence__init(xicro_interfaces__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__Imu * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__Imu *)calloc(size, sizeof(xicro_interfaces__msg__Imu));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Imu__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xicro_interfaces__msg__Imu__Sequence__fini(xicro_interfaces__msg__Imu__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__Imu__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xicro_interfaces__msg__Imu__Sequence *
xicro_interfaces__msg__Imu__Sequence__create(size_t size)
{
  xicro_interfaces__msg__Imu__Sequence * array = (xicro_interfaces__msg__Imu__Sequence *)malloc(sizeof(xicro_interfaces__msg__Imu__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Imu__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Imu__Sequence__destroy(xicro_interfaces__msg__Imu__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__Imu__Sequence__fini(array);
  }
  free(array);
}
