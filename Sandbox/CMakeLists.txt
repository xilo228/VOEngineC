cmake_minimum_required(VERSION 3.16)
project(Sandbox C)

add_subdirectory(../VOEngine/ cmake-build-debug)
add_executable(Sandbox main.c)

target_link_libraries(Sandbox PUBLIC VOEngine)
target_include_directories(Sandbox PUBLIC "../VOEngine" )
target_include_directories(Sandbox PUBLIC "../VOEngine/vendor/glad/include" )

target_include_directories(Sandbox PUBLIC "../VOEngine/cmake-build-debug" )

