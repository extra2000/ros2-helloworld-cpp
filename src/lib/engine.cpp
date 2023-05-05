/*!
 * @file engine.cpp
 * @brief Implements Engine classes.
 */

#include "../../include/engine.hpp"

myengine::HelloWorld::HelloWorld() : Node("helloworld")
{
    RCLCPP_INFO(this->get_logger(), "Hello World! CTRL+C to exit!");
}

myengine::HelloWorld::~HelloWorld()
{
    RCLCPP_INFO(this->get_logger(), "Bye World!");
}
