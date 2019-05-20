cmake_minimum_required(VERSION 3.13)
project(exer_7_0_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_7_0_3 main.cpp space.cpp not_space.cpp split.cpp
        read_grammar.cpp gen_sentence.cpp bracketed.cpp
        gen_aux.cpp nrand.cpp)