cmake_minimum_required(VERSION 3.16)
project(VOEngine VERSION 1.0)

add_library(VOEngine STATIC VOEngine.c VOEngine.h)
find_library(X11 x11)
target_link_libraries(VOEngine PUBLIC X11)


