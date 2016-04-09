cmake_minimum_required(VERSION 3.4)
project(caesar_shift)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)
set(ENV{CAESAR_SHIFT_SOURCE} ${SOURCE_FILES})
add_executable(caesar_shift ${SOURCE_FILES})

add_subdirectory(./tests)
