// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `location`
// Member `serial_number`
#include "rosidl_runtime_c/string_functions.h"

bool
xicro_interfaces__msg__BatteryState__init(xicro_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  // cell_temperature
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    xicro_interfaces__msg__BatteryState__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    xicro_interfaces__msg__BatteryState__fini(msg);
    return false;
  }
  return true;
}

void
xicro_interfaces__msg__BatteryState__fini(xicro_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  // cell_temperature
  // location
  rosidl_runtime_c__String__fini(&msg->location);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
}

xicro_interfaces__msg__BatteryState *
xicro_interfaces__msg__BatteryState__create()
{
  xicro_interfaces__msg__BatteryState * msg = (xicro_interfaces__msg__BatteryState *)malloc(sizeof(xicro_interfaces__msg__BatteryState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__BatteryState));
  bool success = xicro_interfaces__msg__BatteryState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__BatteryState__destroy(xicro_interfaces__msg__BatteryState * msg)
{
  if (msg) {
    xicro_interfaces__msg__BatteryState__fini(msg);
  }
  free(msg);
}


bool
xicro_interfaces__msg__BatteryState__Sequence__init(xicro_interfaces__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  xicro_interfaces__msg__BatteryState * data = NULL;
  if (size) {
    data = (xicro_interfaces__msg__BatteryState *)calloc(size, sizeof(xicro_interfaces__msg__BatteryState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__BatteryState__fini(&data[i - 1]);
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
xicro_interfaces__msg__BatteryState__Sequence__fini(xicro_interfaces__msg__BatteryState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xicro_interfaces__msg__BatteryState__fini(&array->data[i]);
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

xicro_interfaces__msg__BatteryState__Sequence *
xicro_interfaces__msg__BatteryState__Sequence__create(size_t size)
{
  xicro_interfaces__msg__BatteryState__Sequence * array = (xicro_interfaces__msg__BatteryState__Sequence *)malloc(sizeof(xicro_interfaces__msg__BatteryState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__BatteryState__Sequence__destroy(xicro_interfaces__msg__BatteryState__Sequence * array)
{
  if (array) {
    xicro_interfaces__msg__BatteryState__Sequence__fini(array);
  }
  free(array);
}
