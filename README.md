## Build moving obstacles in Gazebo and Integrate TEB Planner

*Build the Gazebo world
```
cd tebplanner/src/dynamic_obstacles_in_gazebo/boxes
mkdir build
cmake ..
make
export GAZEBO_PLUGIN_PATH=$(pwd)
```
*Launch the custom world 
```cd tebplanner/src/dynamic_obstacles_in_gazebo/boxes
roslaunch turtlebot3_cafe.launch
```
*Mapping and navigation: 
```cd tebplanner/src/maps_turtle_bot
roslaunch tebplanner/src/teb_local_planner_tutorials/launch/turtlebot3_navigation_teb.launch map_file:=$(pwd)/stage1.yaml
```
*Configure TEB Planner for dynamic obstacles 
dynamic obstacles:
rosrun rqt_reconfigure rqt_reconfigure

Video has 3 best cases and 1 failure case where the robot hits the obstacle