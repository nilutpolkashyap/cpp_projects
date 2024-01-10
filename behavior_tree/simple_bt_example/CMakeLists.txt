cmake_minimum_required(VERSION 3.5)

project(simple_bt_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} simple_bt_example.cpp)

find_package(ament_cmake QUIET)

if(ament_cmake_FOUND)

    find_package(behaviortree_cpp REQUIRED)
    ament_target_dependencies(${PROJECT_NAME} behaviortree_cpp)

else()

    find_package(behaviortree_cpp REQUIRED)
    target_link_libraries(${PROJECT_NAME} BT::behaviortree_cpp)

endif()

