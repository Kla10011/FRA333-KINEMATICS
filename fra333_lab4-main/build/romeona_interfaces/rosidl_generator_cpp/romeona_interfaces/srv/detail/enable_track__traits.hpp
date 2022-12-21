// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from romeona_interfaces:srv/EnableTrack.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__TRAITS_HPP_
#define ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__TRAITS_HPP_

#include "romeona_interfaces/srv/detail/enable_track__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 's'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_interfaces::srv::EnableTrack_Request>()
{
  return "romeona_interfaces::srv::EnableTrack_Request";
}

template<>
inline const char * name<romeona_interfaces::srv::EnableTrack_Request>()
{
  return "romeona_interfaces/srv/EnableTrack_Request";
}

template<>
struct has_fixed_size<romeona_interfaces::srv::EnableTrack_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<romeona_interfaces::srv::EnableTrack_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<romeona_interfaces::srv::EnableTrack_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_interfaces::srv::EnableTrack_Response>()
{
  return "romeona_interfaces::srv::EnableTrack_Response";
}

template<>
inline const char * name<romeona_interfaces::srv::EnableTrack_Response>()
{
  return "romeona_interfaces/srv/EnableTrack_Response";
}

template<>
struct has_fixed_size<romeona_interfaces::srv::EnableTrack_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<romeona_interfaces::srv::EnableTrack_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<romeona_interfaces::srv::EnableTrack_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<romeona_interfaces::srv::EnableTrack>()
{
  return "romeona_interfaces::srv::EnableTrack";
}

template<>
inline const char * name<romeona_interfaces::srv::EnableTrack>()
{
  return "romeona_interfaces/srv/EnableTrack";
}

template<>
struct has_fixed_size<romeona_interfaces::srv::EnableTrack>
  : std::integral_constant<
    bool,
    has_fixed_size<romeona_interfaces::srv::EnableTrack_Request>::value &&
    has_fixed_size<romeona_interfaces::srv::EnableTrack_Response>::value
  >
{
};

template<>
struct has_bounded_size<romeona_interfaces::srv::EnableTrack>
  : std::integral_constant<
    bool,
    has_bounded_size<romeona_interfaces::srv::EnableTrack_Request>::value &&
    has_bounded_size<romeona_interfaces::srv::EnableTrack_Response>::value
  >
{
};

template<>
struct is_service<romeona_interfaces::srv::EnableTrack>
  : std::true_type
{
};

template<>
struct is_service_request<romeona_interfaces::srv::EnableTrack_Request>
  : std::true_type
{
};

template<>
struct is_service_response<romeona_interfaces::srv::EnableTrack_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROMEONA_INTERFACES__SRV__DETAIL__ENABLE_TRACK__TRAITS_HPP_
