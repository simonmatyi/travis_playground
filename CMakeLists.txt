cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

