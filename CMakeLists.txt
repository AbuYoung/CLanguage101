cmake_minimum_required(VERSION 3.8)
project(cprc)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(cpphw ${SOURCE_FILES})

set(SOURCE_FILES hw.c)
add_executable(hw ${SOURCE_FILES})

set(SOURCE_FILES getchar.c)
add_executable(getchar ${SOURCE_FILES})

set(SOURCE_FILES aep.c)
add_executable(aep ${SOURCE_FILES})

set(SOURCE_FILES BigInteger.c)
add_executable(BigInteger ${SOURCE_FILES})

set(SOURCE_FILES Palindrome.c)
add_executable(Palindrome ${SOURCE_FILES})

set(SOURCE_FILES candy)
add_executable(candy ${SOURCE_FILES})