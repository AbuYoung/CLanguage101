cmake_minimum_required(VERSION 3.8)
project(CLanguage101)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_SOURCE_FILE_EXTENSIONS aep.c)
add_executable(aep ${CMAKE_C_SOURCE_FILE_EXTENSIONS})

set(CMAKE_C_SOURCE_FILE_EXTENSIONS Palindrome.c)
add_executable(Palindrome ${CMAKE_C_SOURCE_FILE_EXTENSIONS})

set(CMAKE_C_SOURCE_FILE_EXTENSIONS maxsort1.c)
add_executable(maxsort ${CMAKE_C_SOURCE_FILE_EXTENSIONS})

set(CMAKE_C_SOURCE_FILE_EXTENSIONS hw.c)
add_executable(hw.out ${CMAKE_C_SOURCE_FILE_EXTENSIONS})

include_directories(DataStruct/Task_1/1.2)
add_executable(SeqMain DataStruct/Task_1/1.2/SeqMain.c
        DataStruct/Task_1/1.2/SeqList.c
        DataStruct/Task_1/1.2/SeqList.h)
