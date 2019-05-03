cmake_minimum_required(VERSION 3.13)
project(CS335OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CS335OOP
        cmake-build-debug/CMakeCache.txt
        CMakeLists.txt Item.cpp Item.h InventoryItem.cpp InventoryItem.h Inventory.cpp Inventory.h Player.cpp Player.h main.cpp)
