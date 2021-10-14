cmake_minimum_required(VERSION 3.1)

project(homework3_2)

set(HOMEWORK3_2_SRC homework3_2.cpp func.cpp Autotest.cpp)
set(HOMEWORK_2_HDR header.hpp Autotest.hpp)

add_executable(${PROJECT_NAME} ${HOMEWORK3_2_SRC} ${HOMEWORK3_2_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")