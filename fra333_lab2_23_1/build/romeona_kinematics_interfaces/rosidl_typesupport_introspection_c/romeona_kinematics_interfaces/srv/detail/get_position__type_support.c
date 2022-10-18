// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "romeona_kinematics_interfaces/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
#include "romeona_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "romeona_kinematics_interfaces/srv/detail/get_position__functions.h"
#include "romeona_kinematics_interfaces/srv/detail/get_position__struct.h"


// Include directives for member types
// Member `q`
#include "sensor_msgs/msg/joint_state.h"
// Member `q`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  romeona_kinematics_interfaces__srv__GetPosition_Request__init(message_memory);
}

void GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function(void * message_memory)
{
  romeona_kinematics_interfaces__srv__GetPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array[1] = {
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces__srv__GetPosition_Request, q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members = {
  "romeona_kinematics_interfaces__srv",  // message namespace
  "GetPosition_Request",  // message name
  1,  // number of fields
  sizeof(romeona_kinematics_interfaces__srv__GetPosition_Request),
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array,  // message members
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle = {
  0,
  &GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Request)() {
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier) {
    GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "romeona_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/get_position__functions.h"
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/get_position__struct.h"


// Include directives for member types
// Member `p`
#include "geometry_msgs/msg/point.h"
// Member `p`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  romeona_kinematics_interfaces__srv__GetPosition_Response__init(message_memory);
}

void GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function(void * message_memory)
{
  romeona_kinematics_interfaces__srv__GetPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[1] = {
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(romeona_kinematics_interfaces__srv__GetPosition_Response, p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members = {
  "romeona_kinematics_interfaces__srv",  // message namespace
  "GetPosition_Response",  // message name
  1,  // number of fields
  sizeof(romeona_kinematics_interfaces__srv__GetPosition_Response),
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array,  // message members
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle = {
  0,
  &GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Response)() {
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier) {
    GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "romeona_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "romeona_kinematics_interfaces/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members = {
  "romeona_kinematics_interfaces__srv",  // service namespace
  "GetPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle,
  NULL  // response message
  // romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle = {
  0,
  &romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_romeona_kinematics_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition)() {
  if (!romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier) {
    romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, romeona_kinematics_interfaces, srv, GetPosition_Response)()->data;
  }

  return &romeona_kinematics_interfaces__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle;
}