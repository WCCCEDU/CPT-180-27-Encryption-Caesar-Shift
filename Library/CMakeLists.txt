cmake_minimum_required(VERSION 3.3)
project(EncryptionLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/../library_include)
set(SOURCE_FILES main.cpp EncryptionHeader.h)

file(COPY EncryptionHeader.h DESTINATION ${CMAKE_CURRENT_LIST_DIR}/../library_include)

add_library (EncryptionLib SHARED ${SOURCE_FILES})
