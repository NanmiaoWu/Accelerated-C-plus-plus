cmake_minimum_required(VERSION 3.13)
project(exer_8_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_8_1 main.cpp template.h average.cpp average_grade.cpp
        did_all_hw.cpp grade.cpp grade_aux.cpp median.cpp optimistic_median.cpp
            Student_info.cpp)