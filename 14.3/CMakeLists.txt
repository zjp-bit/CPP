cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe1.0 LANGUAGES CXX)

#检测操作系统,针对不同操作系统编译不同可执行文件
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
message(STATUS "Configuring on/for Linux")
add_library(student STATIC studentc.h student.cpp)
add_executable(use_stuc_linux use_stuc.cpp)
target_link_libraries(use_stuc_linux student)

elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
message(STATUS "Configuring on/for macOS")
add_library(student STATIC studentc.h student.cpp)
add_executable(use_stuc_macOS use_stuc.cpp)
target_link_libraries(use_stuc_macOS student)

elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
message(STATUS "Configuring on/for Windows")
add_library(student STATIC studentc.h student.cpp)
add_executable(use_stuc_windows use_stuc.cpp)
target_link_libraries(use_stuc_windows student)

elseif(CMAKE_SYSTEM_NAME STREQUAL "AIX")
message(STATUS "Configuring on/for IBM AIX")
add_library(student STATIC studentc.h student.cpp)
add_executable(use_stuc_AIX use_stuc.cpp)
target_link_libraries(use_stuc_AIX student)

else()
message(STATUS "Configuring on/for ${CMAKE_SYSTEM_NAME}")
add_library(student STATIC studentc.h student.cpp)
add_executable(use_stuc_other use_stuc.cpp)
target_link_libraries(use_stuc_other student)

endif()
#检测操作系统结束

#if的简洁表达



