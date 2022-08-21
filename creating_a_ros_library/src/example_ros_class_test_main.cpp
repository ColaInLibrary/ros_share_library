#include <creating_a_ros_library/example_ros_class.h>  // 需要将CMakeLists.txt中的include_directories()中的include前的注释取消掉才能找到

int main(int argc, char** argv) 
{
    // ROS set-ups:
    ros::init(argc, argv, "example_lib_test_main"); //node name

    ros::NodeHandle nh; // create a node handle; need to pass this to the class constructor

    ROS_INFO("main: instantiating an object of type ExampleRosClass");
    ExampleRosClass exampleRosClass(&nh);  //instantiate an ExampleRosClass object and pass in pointer to nodehandle for constructor to use

    ROS_INFO("main: going into spin; let the callbacks do all the work");
    ros::spin();
    return 0;
} 
