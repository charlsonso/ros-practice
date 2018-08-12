#include "husky_highlevel_controller/HuskyHighlevelController.hpp"
#include "std_msgs/String.h"
#include "ros/ros.h"

namespace husky_highlevel_controller {

HuskyHighlevelController::HuskyHighlevelController(ros::NodeHandle& nodeHandle) :
  nodeHandle_(nodeHandle)
{
}

HuskyHighlevelController::~HuskyHighlevelController()
{
}

} /* namespace */
