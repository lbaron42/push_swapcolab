cmake_minimum_required(VERSION 3.25)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(push_swap
        push_swap.c
        push_swap.h push_swaputils.c test.c)
