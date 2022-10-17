// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROBOT_23_KINEMATICS_INTERFACES__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ROBOT_23_KINEMATICS_INTERFACES__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_robot_23_kinematics_interfaces __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_robot_23_kinematics_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_robot_23_kinematics_interfaces __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_robot_23_kinematics_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_robot_23_kinematics_interfaces
    #define ROSIDL_GENERATOR_C_PUBLIC_robot_23_kinematics_interfaces ROSIDL_GENERATOR_C_EXPORT_robot_23_kinematics_interfaces
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_robot_23_kinematics_interfaces ROSIDL_GENERATOR_C_IMPORT_robot_23_kinematics_interfaces
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_robot_23_kinematics_interfaces __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_robot_23_kinematics_interfaces
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_robot_23_kinematics_interfaces __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_robot_23_kinematics_interfaces
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_23_KINEMATICS_INTERFACES__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
