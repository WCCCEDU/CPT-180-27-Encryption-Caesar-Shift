cmake_minimum_required(VERSION 3.3)
project(EncryptionLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp EncryptionHeader.h)

add_library (EncryptionLib ${SOURCE_FILES})