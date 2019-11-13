cmake_minimum_required(VERSION 3.8)
project(cprc)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES aep.c)
add_executable(aep ${SOURCE_FILES})

set(SOURCE_FILES Palindrome.c)
add_executable(Palindrome ${SOURCE_FILES})

set(SOURCE_FILES maxsort1.c)
add_executable(maxsort1 ${SOURCE_FILES})