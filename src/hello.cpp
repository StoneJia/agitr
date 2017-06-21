// This is a ROS version of the standard "Hello world" program.

// Thos header defines the standard ros classes.

#include <ros/ros.h>

int main(int argc, char **argv) {
	//Initialize
	ros::init(argc, argv, "hello_ros");
	ros::NodeHandle nh;
	ROS_INFO_STREAM("hello ros");
}
