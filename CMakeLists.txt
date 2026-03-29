cmake_minimum_required(VERSION 4.1)
project(Express_Format_Detector_Stack_Evaluator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Express_Format_Detector_Stack_Evaluator
        ArrayStack.h
        "main(2).cpp")
