// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice
#include "romeona_interfaces/srv/detail/enable_track__rosidl_typesupport_fastrtps_cpp.hpp"
#include "romeona_interfaces/srv/detail/enable_track__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Bool &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Bool &);
size_t get_serialized_size(
  const std_msgs::msg::Bool &,
  size_t current_alignment);
size_t
max_serialized_size_Bool(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace romeona_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
cdr_serialize(
  const romeona_interfaces::srv::EnableTrack_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: s
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.s,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  romeona_interfaces::srv::EnableTrack_Request & ros_message)
{
  // Member: s
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.s);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
get_serialized_size(
  const romeona_interfaces::srv::EnableTrack_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: s

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.s, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
max_serialized_size_EnableTrack_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: s
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Bool(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _EnableTrack_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const romeona_interfaces::srv::EnableTrack_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EnableTrack_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<romeona_interfaces::srv::EnableTrack_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EnableTrack_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const romeona_interfaces::srv::EnableTrack_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EnableTrack_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EnableTrack_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _EnableTrack_Request__callbacks = {
  "romeona_interfaces::srv",
  "EnableTrack_Request",
  _EnableTrack_Request__cdr_serialize,
  _EnableTrack_Request__cdr_deserialize,
  _EnableTrack_Request__get_serialized_size,
  _EnableTrack_Request__max_serialized_size
};

static rosidl_message_type_support_t _EnableTrack_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnableTrack_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace romeona_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_romeona_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<romeona_interfaces::srv::EnableTrack_Request>()
{
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, romeona_interfaces, srv, EnableTrack_Request)() {
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace romeona_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
cdr_serialize(
  const romeona_interfaces::srv::EnableTrack_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  romeona_interfaces::srv::EnableTrack_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
get_serialized_size(
  const romeona_interfaces::srv::EnableTrack_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_romeona_interfaces
max_serialized_size_EnableTrack_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EnableTrack_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const romeona_interfaces::srv::EnableTrack_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EnableTrack_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<romeona_interfaces::srv::EnableTrack_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EnableTrack_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const romeona_interfaces::srv::EnableTrack_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EnableTrack_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EnableTrack_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _EnableTrack_Response__callbacks = {
  "romeona_interfaces::srv",
  "EnableTrack_Response",
  _EnableTrack_Response__cdr_serialize,
  _EnableTrack_Response__cdr_deserialize,
  _EnableTrack_Response__get_serialized_size,
  _EnableTrack_Response__max_serialized_size
};

static rosidl_message_type_support_t _EnableTrack_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnableTrack_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace romeona_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_romeona_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<romeona_interfaces::srv::EnableTrack_Response>()
{
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, romeona_interfaces, srv, EnableTrack_Response)() {
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace romeona_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _EnableTrack__callbacks = {
  "romeona_interfaces::srv",
  "EnableTrack",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, romeona_interfaces, srv, EnableTrack_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, romeona_interfaces, srv, EnableTrack_Response)(),
};

static rosidl_service_type_support_t _EnableTrack__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnableTrack__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace romeona_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_romeona_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<romeona_interfaces::srv::EnableTrack>()
{
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, romeona_interfaces, srv, EnableTrack)() {
  return &romeona_interfaces::srv::typesupport_fastrtps_cpp::_EnableTrack__handle;
}

#ifdef __cplusplus
}
#endif
