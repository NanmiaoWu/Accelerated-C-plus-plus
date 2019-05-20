cmake_minimum_required(VERSION 3.13)
project(exer_6_0_4)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_6_0_4 main.cpp grade.cpp median.cpp
        Student_info.cpp did_all_hw.cpp grade_aux.cpp median_analysis.cpp
        write_analysis.cpp average.cpp average_grade.cpp average_analysis.cpp
        optimistic_median.cpp optimistic_median_analysis.cpp)