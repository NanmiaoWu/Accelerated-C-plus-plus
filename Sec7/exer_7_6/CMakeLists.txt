cmake_minimum_required(VERSION 3.13)
project(exer_7_6)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_7_6 main.cpp bracketed.cpp gen_aux.cpp gen_sentence.cpp not_space.cpp
        nrand.cpp read_grammar.cpp space.cpp split.cpp)