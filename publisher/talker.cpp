#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "talker");
    ros::NodeHandle node_handle;
    ros::Publisher chatter_publisher = 
        nh.advertise<std_msgs::String>("chater", 1);
    ros::Rate loopRate(10);

    unisigned int count=0;
    while (ros::ok()) {
        std_msgs::String message;
        message.data = "hello world " + std::to_string(count);
        ROS_INFO_STREAM(message.data);
        chatter_publisher.publish(message);
        ros::spinOnce();
        loopRate.sleep();
        count++;
    }
    return 0;
}
