cmake_minimum_required(VERSION 3.21)
project(TP4)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP4 src/main.cpp src/menu_class.cpp header/menu.h header/carte.h src/carte.cpp)
