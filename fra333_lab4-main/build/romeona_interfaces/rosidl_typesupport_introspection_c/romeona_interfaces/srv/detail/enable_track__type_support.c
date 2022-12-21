// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "romeona_interfaces/srv/detail/enable_track__rosidl_typesupport_introspection_c.h"
#include "romeona_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "romeona_interfaces/srv/detail/enable_track__functions.h"
#include "romeona_interfaces/srv/detail/enable_track__struct.h"


// Include directives for member types
// Member `s`
#include "std_msgs/msg/bool.h"
// Member `s`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  romeona_interfaces__srv__EnableTrack_Request__init(message_memory);
}

void EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_fini_function(void * message_memory)
{
  romeona_interfaces__srv__EnableTrack_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_member_array[1] = {
  {
    "s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_interfaces__srv__EnableTrack_Request, s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_members = {
  "romeona_interfaces__srv",  // message namespace
  "EnableTrack_Request",  // message name
  1,  // number of fields
  sizeof(romeona_interfaces__srv__EnableTrack_Request),
  EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_member_array,  // message members
  EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_type_support_handle = {
  0,
  &EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Request)() {
  EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_type_support_handle.typesupport_identifier) {
    EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EnableTrack_Request__rosidl_typesupport_introspection_c__EnableTrack_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__rosidl_typesupport_introspection_c.h"
// already included above
// #include "romeona_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__functions.h"
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  romeona_interfaces__srv__EnableTrack_Response__init(message_memory);
}

void EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_fini_function(void * message_memory)
{
  romeona_interfaces__srv__EnableTrack_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_interfaces__srv__EnableTrack_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_members = {
  "romeona_interfaces__srv",  // message namespace
  "EnableTrack_Response",  // message name
  1,  // number of fields
  sizeof(romeona_interfaces__srv__EnableTrack_Response),
  EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_member_array,  // message members
  EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_type_support_handle = {
  0,
  &EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Response)() {
  if (!EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_type_support_handle.typesupport_identifier) {
    EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EnableTrack_Response__rosidl_typesupport_introspection_c__EnableTrack_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "romeona_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "romeona_interfaces/srv/detail/enable_track__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_members = {
  "romeona_interfaces__srv",  // service namespace
  "EnableTrack",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_Request_message_type_support_handle,
  NULL  // response message
  // romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_Response_message_type_support_handle
};

static rosidl_service_type_support_t romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_type_support_handle = {
  0,
  &romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack)() {
  if (!romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_type_support_handle.typesupport_identifier) {
    romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_interfaces, srv, EnableTrack_Response)()->data;
  }

  return &romeona_interfaces__srv__detail__enable_track__rosidl_typesupport_introspection_c__EnableTrack_service_type_support_handle;
}
