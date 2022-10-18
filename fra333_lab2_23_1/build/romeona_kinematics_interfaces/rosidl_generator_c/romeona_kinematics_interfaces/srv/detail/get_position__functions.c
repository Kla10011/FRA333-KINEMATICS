// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice
#include "romeona_kinematics_interfaces/srv/detail/get_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `q`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
romeona_kinematics_interfaces__srv__GetPosition_Request__init(romeona_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // q
  if (!sensor_msgs__msg__JointState__init(&msg->q)) {
    romeona_kinematics_interfaces__srv__GetPosition_Request__fini(msg);
    return false;
  }
  return true;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Request__fini(romeona_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // q
  sensor_msgs__msg__JointState__fini(&msg->q);
}

romeona_kinematics_interfaces__srv__GetPosition_Request *
romeona_kinematics_interfaces__srv__GetPosition_Request__create()
{
  romeona_kinematics_interfaces__srv__GetPosition_Request * msg = (romeona_kinematics_interfaces__srv__GetPosition_Request *)malloc(sizeof(romeona_kinematics_interfaces__srv__GetPosition_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(romeona_kinematics_interfaces__srv__GetPosition_Request));
  bool success = romeona_kinematics_interfaces__srv__GetPosition_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Request__destroy(romeona_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (msg) {
    romeona_kinematics_interfaces__srv__GetPosition_Request__fini(msg);
  }
  free(msg);
}


bool
romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__init(romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  romeona_kinematics_interfaces__srv__GetPosition_Request * data = NULL;
  if (size) {
    data = (romeona_kinematics_interfaces__srv__GetPosition_Request *)calloc(size, sizeof(romeona_kinematics_interfaces__srv__GetPosition_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = romeona_kinematics_interfaces__srv__GetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        romeona_kinematics_interfaces__srv__GetPosition_Request__fini(&data[i - 1]);
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
romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__fini(romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      romeona_kinematics_interfaces__srv__GetPosition_Request__fini(&array->data[i]);
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

romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence *
romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__create(size_t size)
{
  romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence * array = (romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence *)malloc(sizeof(romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__destroy(romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence * array)
{
  if (array) {
    romeona_kinematics_interfaces__srv__GetPosition_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `p`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
romeona_kinematics_interfaces__srv__GetPosition_Response__init(romeona_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // p
  if (!geometry_msgs__msg__Point__init(&msg->p)) {
    romeona_kinematics_interfaces__srv__GetPosition_Response__fini(msg);
    return false;
  }
  return true;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Response__fini(romeona_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // p
  geometry_msgs__msg__Point__fini(&msg->p);
}

romeona_kinematics_interfaces__srv__GetPosition_Response *
romeona_kinematics_interfaces__srv__GetPosition_Response__create()
{
  romeona_kinematics_interfaces__srv__GetPosition_Response * msg = (romeona_kinematics_interfaces__srv__GetPosition_Response *)malloc(sizeof(romeona_kinematics_interfaces__srv__GetPosition_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(romeona_kinematics_interfaces__srv__GetPosition_Response));
  bool success = romeona_kinematics_interfaces__srv__GetPosition_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Response__destroy(romeona_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (msg) {
    romeona_kinematics_interfaces__srv__GetPosition_Response__fini(msg);
  }
  free(msg);
}


bool
romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__init(romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  romeona_kinematics_interfaces__srv__GetPosition_Response * data = NULL;
  if (size) {
    data = (romeona_kinematics_interfaces__srv__GetPosition_Response *)calloc(size, sizeof(romeona_kinematics_interfaces__srv__GetPosition_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = romeona_kinematics_interfaces__srv__GetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        romeona_kinematics_interfaces__srv__GetPosition_Response__fini(&data[i - 1]);
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
romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__fini(romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      romeona_kinematics_interfaces__srv__GetPosition_Response__fini(&array->data[i]);
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

romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence *
romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__create(size_t size)
{
  romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence * array = (romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence *)malloc(sizeof(romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__destroy(romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence * array)
{
  if (array) {
    romeona_kinematics_interfaces__srv__GetPosition_Response__Sequence__fini(array);
  }
  free(array);
}
