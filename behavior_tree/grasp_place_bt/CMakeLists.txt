cmake_minimum_required(VERSION 3.10.2)

project(grasp_place_bt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} grasp_place_bt.cpp)

find_package(ament_cmake QUIET)

if(ament_cmake_FOUND)

    find_package(behaviortree_cpp REQUIRED)
    ament_target_dependencies(${PROJECT_NAME} behaviortree_cpp)

else()

    find_package(behaviortree_cpp REQUIRED)
    target_link_libraries(${PROJECT_NAME} BT::behaviortree_cpp)

endif()