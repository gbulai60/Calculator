cmake_minimum_required(VERSION 3.23)
project(Calculator C)

set(CMAKE_C_STANDARD 99)

add_executable(Calculator main.c RPN.c)
