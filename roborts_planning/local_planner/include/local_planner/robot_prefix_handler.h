#include"string"
#include"ros/ros.h"

class RobotPrefixHandler{

public:

static RobotPrefixHandler* getInstance(){
    return &RobotPrefixHandler_;
}


std::string getName(){
    return robot_name;
}

private:


RobotPrefixHandler()
{
ros::init(argc, argv, "read_node");
ros::NodeHandle nh("~");
nh.param<std::string>("robot_name", robot_name,"");

}

~RobotPrefixHandler() = default;
static RobotPrefixHandler RobotPrefixHandler_ ;



std::string robot_name = "";

int argc;
char **argv;

};