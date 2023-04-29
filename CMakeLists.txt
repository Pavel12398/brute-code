cmake_minimum_required(VERSION 3.0)

project(brute-code)

set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")

set(SOURCES "src/main.cpp"  "src/singleton.h" "src/utility.h"  "src/utility.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

