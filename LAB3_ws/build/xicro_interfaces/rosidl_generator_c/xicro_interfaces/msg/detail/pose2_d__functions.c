// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Pose2D.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/pose2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
xicro_interfaces__msg__Pose2D__init(xicro_interfaces__msg__Pose2D * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
xicro_interfaces__msg__Pose2D__fini(xicro_interfaces__msg__Pose2D * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

xicro_interfaces__msg__Pose2D *
xicro_interfaces__msg__Pose2D__create()
{
  xicro_interfaces__msg__Pose2D * msg = (xicro_interfaces__msg__Pose2D *)malloc(sizeof(xicro_interfaces__msg__Pose2D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Pose2D));
  bool success = xicro_interfaces__msg__Pose2D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Pose2D__destroy(xicro_interfaces__msg__Pose2D * msg)
{
  if (msg) {
    xicro_interfaces__msg__Pose2D__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__Pose2D__Sequence__init(xicro_interfaces__msg__Pose2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__Pose2D * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__Pose2D *)calloc(size, sizeof(xicro_interfaces__msg__Pose2D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Pose2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Pose2D__fini(&data[i - 1]);
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
xicro_interfaces__msg__Pose2D__Sequence__fini(xicro_interfaces__msg__Pose2D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__Pose2D__fini(&array->data[i]);
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

xicro_interfaces__msg__Pose2D__Sequence *
xicro_interfaces__msg__Pose2D__Sequence__create(size_t size)
{
  xicro_interfaces__msg__Pose2D__Sequence * array = (xicro_interfaces__msg__Pose2D__Sequence *)malloc(sizeof(xicro_interfaces__msg__Pose2D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Pose2D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Pose2D__Sequence__destroy(xicro_interfaces__msg__Pose2D__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__Pose2D__Sequence__fini(array);
  }
  free(array);
}
