#include <ros/ros.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "hello_world");
  ros::NodeHandle node_handle;
  ros::Rate loop_rate;
  
  unsigned int count = 0;
  while (ros::ok()){
    ROS_INFO_STREM("Hello World " << count);
    ros::spinOnce();
    loop_rate.sleep();
    count++;
  }
}
