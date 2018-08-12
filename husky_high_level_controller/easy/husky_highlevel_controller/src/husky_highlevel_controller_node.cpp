#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include "husky_highlevel_controller/HuskyHighlevelController.hpp"
#include <string>
void scan_callback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
    float smallest_distance = msg->range_min;
    ROS_INFO("Smallest Distance: [%s]", std::to_string(smallest_distance).c_str());
    //ROS_INFO("Scan Msg: [%s}", msg->data.c_str());
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "husky_highlevel_controller");
  ros::NodeHandle nodeHandle("~");
  std::string topic_name;
  int queue_size;
  if (nodeHandle.getParam("husky_highlevel_controller/read_topic_name", topic_name) &&
        nodeHandle.getParam("husky_highlevel_controller/queue_size", queue_size)){
    ros::Subscriber sub = nodeHandle.subscribe(topic_name, queue_size, scan_callback);
    husky_highlevel_controller::HuskyHighlevelController huskyHighlevelController(nodeHandle);
  }
  ros::spin();
  return 0;
}
