cmake_minimum_required (VERSION 3.0)
project(TestingCircleCI)
add_executable(C main.c)
add_executable(C++ main.cpp)

set_target_properties(C PROPERTIES SUFFIX .elf)
set_target_properties(C++ PROPERTIES SUFFIX .elf)