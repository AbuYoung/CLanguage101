cmake_minimum_required(VERSION 3.8)
project(cprc)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(cpphw ${SOURCE_FILES})

set(SOURCE_FILES hw.c)
add_executable(hw ${SOURCE_FILES})