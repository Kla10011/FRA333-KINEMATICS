// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/SetGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_

#include "robot_interfaces/srv/detail/set_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGoal_Request_g
{
public:
  Init_SetGoal_Request_g()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::srv::SetGoal_Request g(::robot_interfaces::srv::SetGoal_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::SetGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::SetGoal_Request>()
{
  return robot_interfaces::srv::builder::Init_SetGoal_Request_g();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::SetGoal_Response>()
{
  return ::robot_interfaces::srv::SetGoal_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_
