cmake_minimum_required(VERSION 3.13)
project(prc C)

set(CMAKE_C_STANDARD 11)

include_directories(1.2)
add_executable(SeqMain 1.2/SeqList.c 1.2/SeqMain.c)

include_directories(2.2)
add_executable(StackMain 2.2/StackMain.c 2.2/SeqStack.c)

include_directories(3.2)
add_executable(String 3.2/StaticString.c)

include_directories(4.2)
add_executable(Tree 4.2/t.c)

include_directories(5.2)
add_executable(Graph 5.2/main.c 5.2/MatrixGraph.c)

include_directories(6.2)
add_executable(DataStruct 6.2/datastruct.c)

include_directories(7.2)
add_executable(sort 7.2/sort.c)