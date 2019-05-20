cmake_minimum_required(VERSION 3.13)
project(exer_6_7)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_6_7 main.cpp extract_did.cpp average.cpp average_grade.cpp
        did_all_hw.cpp do_analysis.cpp grade.cpp grade_aux.cpp median.cpp
        optimistic_median.cpp Student_info.cpp write_analysis.cpp)