cmake_minimum_required(VERSION 3.3)
project(caesar_shift)

add_subdirectory("Library")

include_directories("./library_include")
link_directories("./library_include")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(caesar_shift ${SOURCE_FILES})

target_link_libraries(caesar_shift EncryptionLib)
