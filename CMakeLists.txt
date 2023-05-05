cmake_minimum_required(VERSION 3.8)

# Get raw version string
file(READ "${CMAKE_SOURCE_DIR}/VERSION" repo_version_raw)
# Extract full version numbering from the raw string
string(REGEX MATCH "([0-9].[0-9].[0-9]*)" _ ${repo_version_raw})
set(repo_version_full ${CMAKE_MATCH_1})

project(ros2-helloworld-cpp VERSION ${repo_version_full} LANGUAGES CXX)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake 1.3.1 REQUIRED)
find_package(rclcpp 16.0.1 REQUIRED)
find_package(std_msgs 4.2.1 REQUIRED)

add_executable(main "${CMAKE_SOURCE_DIR}/src/main.cpp")
add_library(engine "${CMAKE_SOURCE_DIR}/src/lib/engine.cpp")

set_target_properties(main PROPERTIES CXX_STANDARD 17)
set_target_properties(engine PROPERTIES CXX_STANDARD 17)

target_link_libraries(main engine)
ament_target_dependencies(main rclcpp std_msgs)
ament_target_dependencies(engine rclcpp std_msgs)

install(
  TARGETS
    main
  DESTINATION
    "lib/${PROJECT_NAME}"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
