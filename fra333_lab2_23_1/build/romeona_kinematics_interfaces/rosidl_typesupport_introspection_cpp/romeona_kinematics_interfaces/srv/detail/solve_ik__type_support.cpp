// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from romeona_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "romeona_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace romeona_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SolveIK_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) romeona_kinematics_interfaces::srv::SolveIK_Request(_init);
}

void SolveIK_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<romeona_kinematics_interfaces::srv::SolveIK_Request *>(message_memory);
  typed_message->~SolveIK_Request();
}

size_t size_function__SolveIK_Request__gamma(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__SolveIK_Request__gamma(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveIK_Request__gamma(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolveIK_Request_message_member_array[2] = {
  {
    "point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces::srv::SolveIK_Request, point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gamma",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces::srv::SolveIK_Request, gamma),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveIK_Request__gamma,  // size() function pointer
    get_const_function__SolveIK_Request__gamma,  // get_const(index) function pointer
    get_function__SolveIK_Request__gamma,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolveIK_Request_message_members = {
  "romeona_kinematics_interfaces::srv",  // message namespace
  "SolveIK_Request",  // message name
  2,  // number of fields
  sizeof(romeona_kinematics_interfaces::srv::SolveIK_Request),
  SolveIK_Request_message_member_array,  // message members
  SolveIK_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveIK_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolveIK_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveIK_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace romeona_kinematics_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<romeona_kinematics_interfaces::srv::SolveIK_Request>()
{
  return &::romeona_kinematics_interfaces::srv::rosidl_typesupport_introspection_cpp::SolveIK_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, romeona_kinematics_interfaces, srv, SolveIK_Request)() {
  return &::romeona_kinematics_interfaces::srv::rosidl_typesupport_introspection_cpp::SolveIK_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace romeona_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SolveIK_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) romeona_kinematics_interfaces::srv::SolveIK_Response(_init);
}

void SolveIK_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<romeona_kinematics_interfaces::srv::SolveIK_Response *>(message_memory);
  typed_message->~SolveIK_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolveIK_Response_message_member_array[2] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::JointState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces::srv::SolveIK_Response, q),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Bool>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces::srv::SolveIK_Response, flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolveIK_Response_message_members = {
  "romeona_kinematics_interfaces::srv",  // message namespace
  "SolveIK_Response",  // message name
  2,  // number of fields
  sizeof(romeona_kinematics_interfaces::srv::SolveIK_Response),
  SolveIK_Response_message_member_array,  // message members
  SolveIK_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveIK_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolveIK_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveIK_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace romeona_kinematics_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<romeona_kinematics_interfaces::srv::SolveIK_Response>()
{
  return &::romeona_kinematics_interfaces::srv::rosidl_typesupport_introspection_cpp::SolveIK_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, romeona_kinematics_interfaces, srv, SolveIK_Response)() {
  return &::romeona_kinematics_interfaces::srv::rosidl_typesupport_introspection_cpp::SolveIK_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace romeona_kinematics_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SolveIK_service_members = {
  "romeona_kinematics_interfaces::srv",  // service namespace
  "SolveIK",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<romeona_kinematics_interfaces::srv::SolveIK>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SolveIK_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveIK_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace romeona_kinematics_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<romeona_kinematics_interfaces::srv::SolveIK>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::romeona_kinematics_interfaces::srv::rosidl_typesupport_introspection_cpp::SolveIK_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::romeona_kinematics_interfaces::srv::SolveIK_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::romeona_kinematics_interfaces::srv::SolveIK_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, romeona_kinematics_interfaces, srv, SolveIK)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<romeona_kinematics_interfaces::srv::SolveIK>();
}

#ifdef __cplusplus
}
#endif
