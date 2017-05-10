cmake_minimum_required(VERSION 3.3)
project(CppSandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Object.cpp Object.h InputHandler.cpp InputHandler.h)
add_executable(CppSandbox ${SOURCE_FILES})