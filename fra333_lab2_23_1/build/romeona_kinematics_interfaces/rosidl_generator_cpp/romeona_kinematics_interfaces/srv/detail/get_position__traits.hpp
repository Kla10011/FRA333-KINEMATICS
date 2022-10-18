// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include "romeona_kinematics_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'q'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_kinematics_interfaces::srv::GetPosition_Request>()
{
  return "romeona_kinematics_interfaces::srv::GetPosition_Request";
}

template<>
inline const char * name<romeona_kinematics_interfaces::srv::GetPosition_Request>()
{
  return "romeona_kinematics_interfaces/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<romeona_kinematics_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<romeona_kinematics_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<romeona_kinematics_interfaces::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_kinematics_interfaces::srv::GetPosition_Response>()
{
  return "romeona_kinematics_interfaces::srv::GetPosition_Response";
}

template<>
inline const char * name<romeona_kinematics_interfaces::srv::GetPosition_Response>()
{
  return "romeona_kinematics_interfaces/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<romeona_kinematics_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<romeona_kinematics_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<romeona_kinematics_interfaces::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_kinematics_interfaces::srv::GetPosition>()
{
  return "romeona_kinematics_interfaces::srv::GetPosition";
}

template<>
inline const char * name<romeona_kinematics_interfaces::srv::GetPosition>()
{
  return "romeona_kinematics_interfaces/srv/GetPosition";
}

template<>
struct has_fixed_size<romeona_kinematics_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<romeona_kinematics_interfaces::srv::GetPosition_Request>::value &&
    has_fixed_size<romeona_kinematics_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<romeona_kinematics_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<romeona_kinematics_interfaces::srv::GetPosition_Request>::value &&
    has_bounded_size<romeona_kinematics_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<romeona_kinematics_interfaces::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<romeona_kinematics_interfaces::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<romeona_kinematics_interfaces::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
