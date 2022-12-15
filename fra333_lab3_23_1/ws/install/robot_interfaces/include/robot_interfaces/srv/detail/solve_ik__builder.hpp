// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_

#include "robot_interfaces/srv/detail/solve_ik__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Request_gamma
{
public:
  explicit Init_SolveIK_Request_gamma(::robot_interfaces::srv::SolveIK_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::SolveIK_Request gamma(::robot_interfaces::srv::SolveIK_Request::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::SolveIK_Request msg_;
};

class Init_SolveIK_Request_point
{
public:
  Init_SolveIK_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Request_gamma point(::robot_interfaces::srv::SolveIK_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_SolveIK_Request_gamma(msg_);
  }

private:
  ::robot_interfaces::srv::SolveIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::SolveIK_Request>()
{
  return robot_interfaces::srv::builder::Init_SolveIK_Request_point();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Response_flag
{
public:
  explicit Init_SolveIK_Response_flag(::robot_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::SolveIK_Response flag(::robot_interfaces::srv::SolveIK_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_q
{
public:
  Init_SolveIK_Response_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Response_flag q(::robot_interfaces::srv::SolveIK_Response::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_SolveIK_Response_flag(msg_);
  }

private:
  ::robot_interfaces::srv::SolveIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::SolveIK_Response>()
{
  return robot_interfaces::srv::builder::Init_SolveIK_Response_q();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
