// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xicro_interfaces:msg/Time.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/time__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xicro_interfaces/msg/detail/time__struct.hpp"

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

namespace xicro_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_interfaces
cdr_serialize(
  const xicro_interfaces::msg::Time & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sec
  cdr << ros_message.sec;
  // Member: nanosec
  cdr << ros_message.nanosec;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xicro_interfaces::msg::Time & ros_message)
{
  // Member: sec
  cdr >> ros_message.sec;

  // Member: nanosec
  cdr >> ros_message.nanosec;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_interfaces
get_serialized_size(
  const xicro_interfaces::msg::Time & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sec
  {
    size_t item_size = sizeof(ros_message.sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nanosec
  {
    size_t item_size = sizeof(ros_message.nanosec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xicro_interfaces
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nanosec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xicro_interfaces::msg::Time *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Time__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xicro_interfaces::msg::Time *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Time__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xicro_interfaces::msg::Time *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Time__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Time(full_bounded, 0);
}

static message_type_support_callbacks_t _Time__callbacks = {
  "xicro_interfaces::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Time__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xicro_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xicro_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<xicro_interfaces::msg::Time>()
{
  return &xicro_interfaces::msg::typesupport_fastrtps_cpp::_Time__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xicro_interfaces, msg, Time)() {
  return &xicro_interfaces::msg::typesupport_fastrtps_cpp::_Time__handle;
}

#ifdef __cplusplus
}
#endif
