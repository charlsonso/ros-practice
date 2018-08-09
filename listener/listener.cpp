#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv){
    ros::init(argc, arv, "listener");

    ros::NodeHandle node;
    ros:: Subscriber subscriber = node.subscribe("chatter",
                                                 10,
                                                 chatterCallback);

    ros::spin();
    return 0;
}
