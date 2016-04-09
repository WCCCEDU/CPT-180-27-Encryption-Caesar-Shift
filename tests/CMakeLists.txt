cmake_minimum_required(VERSION 3.4)
project(caesar_shift_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include(${CMAKE_CURRENT_SOURCE_DIR}/../conanbuildinfo.cmake)
set(GTEST_ROOT ${CONAN_GTEST_ROOT})

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(caesar_shift_test test1.cpp ${CAESAR_SHIFT_SOURCE})

target_link_libraries(caesar_shift_test ${GTEST_BOTH_LIBRARIES})
