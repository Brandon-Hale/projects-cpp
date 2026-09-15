cmake_minimum_required(VERSION 3.16)
project(CGPACalculator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cgpa
    src/main.cpp
    src/GradeCalculator.cpp
    src/FileManager.cpp
)
target_include_directories(cgpa PRIVATE include)
target_compile_options(cgpa PRIVATE -Wall -Wextra)