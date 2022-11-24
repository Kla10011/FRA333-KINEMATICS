// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Header.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "xicro_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
xicro_interfaces__msg__Header__init(xicro_interfaces__msg__Header * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!xicro_interfaces__msg__Time__init(&msg->stamp)) {
    xicro_interfaces__msg__Header__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    xicro_interfaces__msg__Header__fini(msg);
    return false;
  }
  return true;
}

void
xicro_interfaces__msg__Header__fini(xicro_interfaces__msg__Header * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  xicro_interfaces__msg__Time__fini(&msg->stamp);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
}

xicro_interfaces__msg__Header *
xicro_interfaces__msg__Header__create()
{
  xicro_interfaces__msg__Header * msg = (xicro_interfaces__msg__Header *)malloc(sizeof(xicro_interfaces__msg__Header));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Header));
  bool success = xicro_interfaces__msg__Header__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Header__destroy(xicro_interfaces__msg__Header * msg)
{
  if (msg) {
    xicro_interfaces__msg__Header__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__Header__Sequence__init(xicro_interfaces__msg__Header__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__Header * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__Header *)calloc(size, sizeof(xicro_interfaces__msg__Header));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Header__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Header__fini(&data[i - 1]);
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
xicro_interfaces__msg__Header__Sequence__fini(xicro_interfaces__msg__Header__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__Header__fini(&array->data[i]);
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

xicro_interfaces__msg__Header__Sequence *
xicro_interfaces__msg__Header__Sequence__create(size_t size)
{
  xicro_interfaces__msg__Header__Sequence * array = (xicro_interfaces__msg__Header__Sequence *)malloc(sizeof(xicro_interfaces__msg__Header__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Header__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Header__Sequence__destroy(xicro_interfaces__msg__Header__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__Header__Sequence__fini(array);
  }
  free(array);
}
