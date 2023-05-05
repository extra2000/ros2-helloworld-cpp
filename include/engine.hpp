/*!
 * @file engine.hpp
 * @brief Engine header.
 */

#ifndef INCLUDE_ENGINE_HPP_
#define INCLUDE_ENGINE_HPP_


#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

namespace myengine
{

//! HelloWorld class.
/*!
 * The main Engine class.
 */
class HelloWorld : public rclcpp::Node
{
public:
    //! HelloWorld constructor
    /*!
     * Construct HelloWorld and prints "Hello World!"
     */
    HelloWorld();

    //! HelloWorld destructor
    /*!
     * Destroy HelloWorld and prints "Bye World!"
     */
    ~HelloWorld();
}; // class HelloWorld

} // namespace myengine


#endif // INCLUDE_ENGINE_HPP_
