cmake_minimum_required(VERSION 3.25)
project(EditDistance)

set(CMAKE_CXX_STANDARD 17)

add_executable(EditDistance main.cpp distanceCal.cpp distanceCal.h printer.cpp printer.h)
