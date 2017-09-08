cmake_minimum_required(VERSION 3.8)
project(dispatcher)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h utils.cpp utils.h menu.cpp)
add_executable(dispatcher ${SOURCE_FILES})