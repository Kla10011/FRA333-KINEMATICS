// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_23_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include "robot_23_kinematics_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_23_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_joints
{
public:
  Init_GetPosition_Request_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_23_kinematics_interfaces::srv::GetPosition_Request joints(::robot_23_kinematics_interfaces::srv::GetPosition_Request::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_23_kinematics_interfaces::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_23_kinematics_interfaces::srv::GetPosition_Request>()
{
  return robot_23_kinematics_interfaces::srv::builder::Init_GetPosition_Request_joints();
}

}  // namespace robot_23_kinematics_interfaces


namespace robot_23_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_position
{
public:
  Init_GetPosition_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_23_kinematics_interfaces::srv::GetPosition_Response position(::robot_23_kinematics_interfaces::srv::GetPosition_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_23_kinematics_interfaces::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_23_kinematics_interfaces::srv::GetPosition_Response>()
{
  return robot_23_kinematics_interfaces::srv::builder::Init_GetPosition_Response_position();
}

}  // namespace robot_23_kinematics_interfaces

#endif  // ROBOT_23_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
