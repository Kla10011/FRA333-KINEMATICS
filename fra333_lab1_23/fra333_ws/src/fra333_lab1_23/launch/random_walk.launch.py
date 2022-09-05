#!usr/bin/python3
from launch import LaunchDescription
from launch.actions import ExecuteProcess,DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
def generate_launch_description():
    # create a place holder for launch description

    # launch_description = LaunchDescription()

    ### Example for adding launch argument ###
    rate = LaunchConfiguration('rate')
    rate_launch_arg = DeclareLaunchArgument('rate',default_value='1.0')
    #launch_description.add_action(rate_launch_arg)
    
    ## Example for adding a node ###
    turtlesim = Node(
        package='turtlesim',
        executable='turtlesim_node',
        parameters=[
            {'background_b':100},
            {'background_g':20},
            {'background_r':100},
        ]
    )
    # launch_description.add_action(turtlesim)
    
    linear_noise_generator = Node(
        package='fra333_lab1_23',
        executable='noise_generator.py',
        namespace= '/linear',
        arguments=[rate]
    )
    # launch_description.add_action(linear_noise_generator)
    
    angular_noise_generator = Node(
        package='fra333_lab1_23',
        executable='noise_generator.py',
        namespace= '/angular',
        arguments=[rate]
    )
    # launch_description.add_action(angular_noise_generator)
    
    velocity_mux = Node(
        package='fra333_lab1_23',
        executable='velocity_mux.py',
        namespace= 'velocity_mux',
        arguments=[rate]
    )
    # launch_description.add_action(velocity_mux)

    # node = Node(
    #     package='fra333_lab1_23',
    #     executable='my_executable',
    #     namespace= 'this_namespace',
    #     arguments=[rate],
    #     remappings=[
    #         ('/topic_1','/topic_a'),
    #         ('/topic_2','/topic_b'),
    #     ]
    # )
    # launch_description.add_action(node)

    # ## Example for execute a shell command in python script ###
    # vx = 1.0
    # wz = 1.0
    # pub_cmd_vel = ExecuteProcess(
    #     cmd = [[f'ros2 topic pub -r 10 /turtle1/cmd_vel geometry_msgs/msg/Twist "{{linear: {{x: {vx}, y: 0.0, z: 0.0}}, angular: {{x: 0.0, y: 0.0, z: {wz}}}}}"']],
    #     shell=True
    # )
    # launch_description.add_action(pub_cmd_vel)
    entity_to_run = [rate_launch_arg,turtlesim,linear_noise_generator,angular_noise_generator,velocity_mux]
    return LaunchDescription(entity_to_run)

    