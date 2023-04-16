cmake_minimum_required(VERSION 3.0)

project(brute-code)


# set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCES src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

