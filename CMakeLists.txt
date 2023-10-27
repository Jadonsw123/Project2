cmake_minimum_required(VERSION 3.22)
project(Prog_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prog_2 prog2test.cpp
        MyGraph.cpp
        MyGraph.h
        )
