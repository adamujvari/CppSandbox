cmake_minimum_required(VERSION 3.6)
project(CppSandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11")

set(SOURCE_FILES
    InputHandler.cpp
    InputHandler.h
    main.cpp
    Object.cpp
    Object.h)

add_executable(CppSandbox ${SOURCE_FILES})