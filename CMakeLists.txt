cmake_minimum_required(VERSION 3.24)
project(student_management C)

set(CMAKE_C_STANDARD 23)

add_executable(student_management main.c student.h student.c)
