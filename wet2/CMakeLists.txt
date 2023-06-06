cmake_minimum_required(VERSION 3.24)
project(wet2)

set(CMAKE_CXX_STANDARD 11)

add_executable(wet2 recordsCompany.h utilesWet2.h mainWet2.cpp Record.h NodeUF.h Heap.h NodeUF.cpp Heap.cpp)
