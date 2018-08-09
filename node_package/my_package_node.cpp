/* Main Node file. Creates the instance of your class.
 */
#include <ros/ros.h>
#include "my_package/MyPackage.hpp"
int main(int argc, char** argv) {
    ros::init(argc, argv, "my_package");
    ros::NodeHandle node_handle("~");
    
    std::string topic;

    if (!nodeHandle.getParam("topic", topic)) {
        ROS_ERROR("Could not find topic parameter!");
    }

    // Returns true if node parameter is found
    if(nodeHandle.getParam("camera/left/exposure", variable){
        my_package::MyPackage myPackage(nodeHandle);
    }



    ros::spin();
    return 0;
}
