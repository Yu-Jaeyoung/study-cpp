cmake_minimum_required(VERSION 3.23)
project(chap04)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chap04
        예제4-1.cpp
        예제4-2.cpp
        예제4-3.cpp
        예제4-4.cpp
        예제4-5.cpp
        예제4-6.cpp
        예제4-7.cpp
        Adder.h
        Calculator.h
        Calculator.cpp
        Adder.cpp
        main.cpp
        과제-1.cpp
        과제-2.cpp)
