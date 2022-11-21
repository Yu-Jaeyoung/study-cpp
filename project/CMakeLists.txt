cmake_minimum_required(VERSION 3.23)
project(project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project
        main.cpp
        dice.cpp
        dice.h
        player.cpp
        player.h
        points.cpp
        points.h
        type.cpp
        type.h)
