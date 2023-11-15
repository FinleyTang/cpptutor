cmake_minimum_required(VERSION 3.12)
project(CppTutor)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppTutor src/main.cpp
        lib/Circle.cpp
        include/Circle.h)