cmake_minimum_required(VERSION 3.6)
project(sort_cmp_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp quicksort.cpp quicksort.h sorter.cpp sorter.h helpers.cpp helpers.h qsort.cpp qsort.h cppsort.cpp cppsort.h bubblesort.cpp bubblesort.h)
add_executable(sort_cmp_cpp ${SOURCE_FILES})
