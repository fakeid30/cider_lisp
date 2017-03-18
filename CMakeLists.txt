cmake_minimum_required(VERSION 3.6)
project(lisp)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-ledit")

set(SOURCE_FILES main.c mpc.c)
add_executable(lisp ${SOURCE_FILES})

target_link_libraries(lisp m)
