cmake_minimum_required(VERSION 3.21)
project(TP4)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP4 src/main.cpp src/menu.cpp header/menu.h header/carte1.h src/carte1.cpp src/carte2.cpp header/carte2.h src/personne.cpp header/personne.h)
