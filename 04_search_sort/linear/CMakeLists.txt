cmake_minimum_required(VERSION 3.16 )
project(linearsearch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(linearsearch lin.cpp linfunc.cpp)