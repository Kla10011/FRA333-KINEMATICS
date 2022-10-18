// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from romeona_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include "romeona_kinematics_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace romeona_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_q
{
public:
  Init_GetPosition_Request_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::romeona_kinematics_interfaces::srv::GetPosition_Request q(::romeona_kinematics_interfaces::srv::GetPosition_Request::_q_type arg)
  {
    msg_.q = std::move(arg);
    return std::move(msg_);
  }

private:
  ::romeona_kinematics_interfaces::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::romeona_kinematics_interfaces::srv::GetPosition_Request>()
{
  return romeona_kinematics_interfaces::srv::builder::Init_GetPosition_Request_q();
}

}  // namespace romeona_kinematics_interfaces


namespace romeona_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_p
{
public:
  Init_GetPosition_Response_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::romeona_kinematics_interfaces::srv::GetPosition_Response p(::romeona_kinematics_interfaces::srv::GetPosition_Response::_p_type arg)
  {
    msg_.p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::romeona_kinematics_interfaces::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::romeona_kinematics_interfaces::srv::GetPosition_Response>()
{
  return romeona_kinematics_interfaces::srv::builder::Init_GetPosition_Response_p();
}

}  // namespace romeona_kinematics_interfaces

#endif  // ROMEONA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
