cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe01 LANGUAGES CXX)
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "Configuring on/for Linux")

endif()
add_executable(calling calling.cpp)


