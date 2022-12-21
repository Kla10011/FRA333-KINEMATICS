// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice
#include "romeona_interfaces/srv/detail/enable_track__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "romeona_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "romeona_interfaces/srv/detail/enable_track__struct.h"
#include "romeona_interfaces/srv/detail/enable_track__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/bool__functions.h"  // s

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_romeona_interfaces
size_t get_serialized_size_std_msgs__msg__Bool(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_romeona_interfaces
size_t max_serialized_size_std_msgs__msg__Bool(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_romeona_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Bool)();


using _EnableTrack_Request__ros_msg_type = romeona_interfaces__srv__EnableTrack_Request;

static bool _EnableTrack_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnableTrack_Request__ros_msg_type * ros_message = static_cast<const _EnableTrack_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Bool
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->s, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _EnableTrack_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnableTrack_Request__ros_msg_type * ros_message = static_cast<_EnableTrack_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Bool
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->s))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_romeona_interfaces
size_t get_serialized_size_romeona_interfaces__srv__EnableTrack_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnableTrack_Request__ros_msg_type * ros_message = static_cast<const _EnableTrack_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name s

  current_alignment += get_serialized_size_std_msgs__msg__Bool(
    &(ros_message->s), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _EnableTrack_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_romeona_interfaces__srv__EnableTrack_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_romeona_interfaces
size_t max_serialized_size_romeona_interfaces__srv__EnableTrack_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: s
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Bool(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EnableTrack_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_romeona_interfaces__srv__EnableTrack_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EnableTrack_Request = {
  "romeona_interfaces::srv",
  "EnableTrack_Request",
  _EnableTrack_Request__cdr_serialize,
  _EnableTrack_Request__cdr_deserialize,
  _EnableTrack_Request__get_serialized_size,
  _EnableTrack_Request__max_serialized_size
};

static rosidl_message_type_support_t _EnableTrack_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnableTrack_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, romeona_interfaces, srv, EnableTrack_Request)() {
  return &_EnableTrack_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "romeona_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__struct.h"
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EnableTrack_Response__ros_msg_type = romeona_interfaces__srv__EnableTrack_Response;

static bool _EnableTrack_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnableTrack_Response__ros_msg_type * ros_message = static_cast<const _EnableTrack_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _EnableTrack_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnableTrack_Response__ros_msg_type * ros_message = static_cast<_EnableTrack_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_romeona_interfaces
size_t get_serialized_size_romeona_interfaces__srv__EnableTrack_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnableTrack_Response__ros_msg_type * ros_message = static_cast<const _EnableTrack_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnableTrack_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_romeona_interfaces__srv__EnableTrack_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_romeona_interfaces
size_t max_serialized_size_romeona_interfaces__srv__EnableTrack_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EnableTrack_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_romeona_interfaces__srv__EnableTrack_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EnableTrack_Response = {
  "romeona_interfaces::srv",
  "EnableTrack_Response",
  _EnableTrack_Response__cdr_serialize,
  _EnableTrack_Response__cdr_deserialize,
  _EnableTrack_Response__get_serialized_size,
  _EnableTrack_Response__max_serialized_size
};

static rosidl_message_type_support_t _EnableTrack_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnableTrack_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, romeona_interfaces, srv, EnableTrack_Response)() {
  return &_EnableTrack_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "romeona_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "romeona_interfaces/srv/enable_track.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EnableTrack__callbacks = {
  "romeona_interfaces::srv",
  "EnableTrack",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, romeona_interfaces, srv, EnableTrack_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, romeona_interfaces, srv, EnableTrack_Response)(),
};

static rosidl_service_type_support_t EnableTrack__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EnableTrack__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, romeona_interfaces, srv, EnableTrack)() {
  return &EnableTrack__handle;
}

#if defined(__cplusplus)
}
#endif
