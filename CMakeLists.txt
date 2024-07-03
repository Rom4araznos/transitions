cmake_minimum_required(VERSION 3.16)

project(Transitions LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(transitions STATIC src/transitions.cpp)

target_include_directories(transitions PUBLIC src)

add_subdirectory(tests)




