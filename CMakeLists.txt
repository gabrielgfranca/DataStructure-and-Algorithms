cmake_minimum_required(VERSION 4.1)
project(DataStructure_and_Algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(
        Main main.c
        Array/array.c
        Array/array.h
        Stack/stack.c
        Stack/stack.h
)
