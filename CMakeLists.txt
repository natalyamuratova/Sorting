cmake_minimum_required(VERSION 3.22)
project(Sorting)

set(CMAKE_CXX_STANDARD 23)

add_executable(Sorting main.cpp algorithms/sorting.h algorithms/insertion_sort.cpp algorithms/shell_sort.cpp algorithms/quick_sort.cpp examples/tasks.h examples/nuts_and_bolts.cpp algorithms/bubble_sort.cpp algorithms/merge_sort.cpp)
