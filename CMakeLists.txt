cmake_minimum_required(VERSION 3.3)
project(caesar_shift)

include_directories("./Library")
link_directories("./Library")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(caesar_shift ${SOURCE_FILES})

target_link_libraries(caesar_shift EncryptionLib)