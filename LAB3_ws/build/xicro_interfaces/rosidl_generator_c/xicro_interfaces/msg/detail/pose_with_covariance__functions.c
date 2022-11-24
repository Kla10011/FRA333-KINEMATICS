// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/pose_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
xicro_interfaces__msg__PoseWithCovariance__init(xicro_interfaces__msg__PoseWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  // covariance
  return true;
}

void
xicro_interfaces__msg__PoseWithCovariance__fini(xicro_interfaces__msg__PoseWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // pose
  // covariance
}

xicro_interfaces__msg__PoseWithCovariance *
xicro_interfaces__msg__PoseWithCovariance__create()
{
  xicro_interfaces__msg__PoseWithCovariance * msg = (xicro_interfaces__msg__PoseWithCovariance *)malloc(sizeof(xicro_interfaces__msg__PoseWithCovariance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__PoseWithCovariance));
  bool success = xicro_interfaces__msg__PoseWithCovariance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__PoseWithCovariance__destroy(xicro_interfaces__msg__PoseWithCovariance * msg)
{
  if (msg) {
    xicro_interfaces__msg__PoseWithCovariance__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__PoseWithCovariance__Sequence__init(xicro_interfaces__msg__PoseWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__PoseWithCovariance * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__PoseWithCovariance *)calloc(size, sizeof(xicro_interfaces__msg__PoseWithCovariance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__PoseWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__PoseWithCovariance__fini(&data[i - 1]);
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
xicro_interfaces__msg__PoseWithCovariance__Sequence__fini(xicro_interfaces__msg__PoseWithCovariance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__PoseWithCovariance__fini(&array->data[i]);
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

xicro_interfaces__msg__PoseWithCovariance__Sequence *
xicro_interfaces__msg__PoseWithCovariance__Sequence__create(size_t size)
{
  xicro_interfaces__msg__PoseWithCovariance__Sequence * array = (xicro_interfaces__msg__PoseWithCovariance__Sequence *)malloc(sizeof(xicro_interfaces__msg__PoseWithCovariance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__PoseWithCovariance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__PoseWithCovariance__Sequence__destroy(xicro_interfaces__msg__PoseWithCovariance__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__PoseWithCovariance__Sequence__fini(array);
  }
  free(array);
}
