from conans import ConanFile, CMake

class CaesarShift(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   requires = "gtest/1.7.0@lasote/stable"
   generators = "cmake", "gcc", "txt"
   default_options = "GTest:shared=False"
