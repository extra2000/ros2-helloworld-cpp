#include "../include/engine.hpp"

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<myengine::HelloWorld>());
    rclcpp::shutdown();
    return 0;
}
