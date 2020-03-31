cmake_minimum_required(VERSION 3.15)
project(zad3)

set(CMAKE_CXX_STANDARD 17)

add_executable(zad3
        LICENSE inc/Vector.hh inc/Matrix.hh inc/LinearEquation.hh src/Vector.cc src/Matrix.cc src/LinearEquation.cc src/main.cc)
