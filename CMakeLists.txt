cmake_minimum_required(VERSION 4.3)
project(EE2073 C)

set(CMAKE_C_STANDARD 23)

add_executable(classwork_test Classwork/classwork.c
        Labs/LAB1/lab1.c)
add_executable(hw1 HW1/hw1.c)
add_executable(hw2 HW2/hw2.c)
add_executable(hw3 HW3/hw3.c)
add_executable(lab1 Labs/LAB1/lab1.c
        Labs/LAB1/lab1.c)

