// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Twist.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/twist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
xicro_interfaces__msg__Twist__init(xicro_interfaces__msg__Twist * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  // angular
  return true;
}

void
xicro_interfaces__msg__Twist__fini(xicro_interfaces__msg__Twist * msg)
{
  if (!msg) {
    return;
  }
  // linear
  // angular
}

xicro_interfaces__msg__Twist *
xicro_interfaces__msg__Twist__create()
{
  xicro_interfaces__msg__Twist * msg = (xicro_interfaces__msg__Twist *)malloc(sizeof(xicro_interfaces__msg__Twist));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Twist));
  bool success = xicro_interfaces__msg__Twist__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Twist__destroy(xicro_interfaces__msg__Twist * msg)
{
  if (msg) {
    xicro_interfaces__msg__Twist__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__Twist__Sequence__init(xicro_interfaces__msg__Twist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__Twist * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__Twist *)calloc(size, sizeof(xicro_interfaces__msg__Twist));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Twist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Twist__fini(&data[i - 1]);
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
xicro_interfaces__msg__Twist__Sequence__fini(xicro_interfaces__msg__Twist__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__Twist__fini(&array->data[i]);
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

xicro_interfaces__msg__Twist__Sequence *
xicro_interfaces__msg__Twist__Sequence__create(size_t size)
{
  xicro_interfaces__msg__Twist__Sequence * array = (xicro_interfaces__msg__Twist__Sequence *)malloc(sizeof(xicro_interfaces__msg__Twist__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Twist__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Twist__Sequence__destroy(xicro_interfaces__msg__Twist__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__Twist__Sequence__fini(array);
  }
  free(array);
}
