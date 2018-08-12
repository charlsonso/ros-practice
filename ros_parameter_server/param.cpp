//In ros to get a parameter in c++
//returns true if parameter was found, false otherwise
nodeHandle.getParam(parameter_name, variable)

//Global parameter name with preceding /

nodeHandle.getParam("/package/camera/left/exposure", variable)

//Relative parameter name
nodeHandle.getParameter("camera/left/exposure", variable)

//Use private node handle
ros::NodeHandle("~")

ros::NodeHandle nodeHandle("~");
std::string topic;
if (!nodeHandlegetParam("topic", topc)) {
    ROS_ERROR("Could not find topic parameter!");
}

