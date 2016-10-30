cmake_minimum_required(VERSION 3.6)
project(optica)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Ray.cpp Ray.h CCD.cpp CCD.h)
add_executable(optica ${SOURCE_FILES})