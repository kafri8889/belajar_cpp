cmake_minimum_required(VERSION 3.26)
project(belajar_cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(belajar_cpp main.cpp
        basic/print.h
        basic/function.h
        basic/basic.cpp
        common/input_output.h
        bab_2/variable/storage_class.h
)
