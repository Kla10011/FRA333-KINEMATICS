// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
xicro_interfaces__msg__JointState__init(xicro_interfaces__msg__JointState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->name[i])) {
      xicro_interfaces__msg__JointState__fini(msg);
      return false;
    }
  }
  // position
  // velocity
  // effort
  return true;
}

void
xicro_interfaces__msg__JointState__fini(xicro_interfaces__msg__JointState * msg)
{
  if (!msg) {
    return;
  }
  // name
  for (size_t i = 0; i < 4; ++i) {
    rosidl_runtime_c__String__fini(&msg->name[i]);
  }
  // position
  // velocity
  // effort
}

xicro_interfaces__msg__JointState *
xicro_interfaces__msg__JointState__create()
{
  xicro_interfaces__msg__JointState * msg = (xicro_interfaces__msg__JointState *)malloc(sizeof(xicro_interfaces__msg__JointState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__JointState));
  bool success = xicro_interfaces__msg__JointState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__JointState__destroy(xicro_interfaces__msg__JointState * msg)
{
  if (msg) {
    xicro_interfaces__msg__JointState__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__JointState__Sequence__init(xicro_interfaces__msg__JointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__JointState * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__JointState *)calloc(size, sizeof(xicro_interfaces__msg__JointState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__JointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__JointState__fini(&data[i - 1]);
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
xicro_interfaces__msg__JointState__Sequence__fini(xicro_interfaces__msg__JointState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__JointState__fini(&array->data[i]);
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

xicro_interfaces__msg__JointState__Sequence *
xicro_interfaces__msg__JointState__Sequence__create(size_t size)
{
  xicro_interfaces__msg__JointState__Sequence * array = (xicro_interfaces__msg__JointState__Sequence *)malloc(sizeof(xicro_interfaces__msg__JointState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__JointState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__JointState__Sequence__destroy(xicro_interfaces__msg__JointState__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__JointState__Sequence__fini(array);
  }
  free(array);
}
