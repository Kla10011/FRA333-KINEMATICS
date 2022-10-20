// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_23_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
#define ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_

#include "robot_23_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_23_kinematics_interfaces::srv::SolveIK_Request>()
{
  return "robot_23_kinematics_interfaces::srv::SolveIK_Request";
}

template<>
inline const char * name<robot_23_kinematics_interfaces::srv::SolveIK_Request>()
{
  return "robot_23_kinematics_interfaces/srv/SolveIK_Request";
}

template<>
struct has_fixed_size<robot_23_kinematics_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<robot_23_kinematics_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<robot_23_kinematics_interfaces::srv::SolveIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'q'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_23_kinematics_interfaces::srv::SolveIK_Response>()
{
  return "robot_23_kinematics_interfaces::srv::SolveIK_Response";
}

template<>
inline const char * name<robot_23_kinematics_interfaces::srv::SolveIK_Response>()
{
  return "robot_23_kinematics_interfaces/srv/SolveIK_Response";
}

template<>
struct has_fixed_size<robot_23_kinematics_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<robot_23_kinematics_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<robot_23_kinematics_interfaces::srv::SolveIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_23_kinematics_interfaces::srv::SolveIK>()
{
  return "robot_23_kinematics_interfaces::srv::SolveIK";
}

template<>
inline const char * name<robot_23_kinematics_interfaces::srv::SolveIK>()
{
  return "robot_23_kinematics_interfaces/srv/SolveIK";
}

template<>
struct has_fixed_size<robot_23_kinematics_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_23_kinematics_interfaces::srv::SolveIK_Request>::value &&
    has_fixed_size<robot_23_kinematics_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_23_kinematics_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_23_kinematics_interfaces::srv::SolveIK_Request>::value &&
    has_bounded_size<robot_23_kinematics_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct is_service<robot_23_kinematics_interfaces::srv::SolveIK>
  : std::true_type
{
};

template<>
struct is_service_request<robot_23_kinematics_interfaces::srv::SolveIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_23_kinematics_interfaces::srv::SolveIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
