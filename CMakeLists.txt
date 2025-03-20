cmake_minimum_required(VERSION 3.10)
project(tanks)

add_subdirectory(external/glfw)

add_executable(tanks src/main.cpp)

target_link_libraries(tanks glfw)

find_package(OpenGL REQUIRED)

target_link_libraries(tanks OpenGL::GL)