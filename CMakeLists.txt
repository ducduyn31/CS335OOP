cmake_minimum_required(VERSION 3.13)
project(CS335OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CS335OOP
        cmake-build-debug/CMakeCache.txt
        CMakeLists.txt FloatArray.cpp FloatArray.h main.cpp)
