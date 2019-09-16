project(high)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")	# -std=gnu++11
set (CMAKE_BUILD_TYPE "Debug")
message("cmake cc flags : ${CMAKE_CXX_FLAGS}")

include_directories(/usr/include/gstreamer-1.0 /usr/lib/aarch64-linux-gnu/gstreamer-1.0/include /usr/include/glib-2.0 /usr/include/libxml2 /usr/lib/aarch64-linux-gnu/glib-2.0/include/)

file(GLOB cSource *.cpp)
file(GLOB cInclude *.h)

add_executable(app ${cSource})
