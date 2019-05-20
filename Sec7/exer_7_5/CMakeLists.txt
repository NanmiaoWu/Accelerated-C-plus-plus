cmake_minimum_required(VERSION 3.13)
project(exer_7_5)

set(CMAKE_CXX_STANDARD 14)

add_executable(exer_7_5 main.cpp bracketed.cpp gen_sentence.cpp gen_aux.cpp
        not_space.cpp nrand.cpp read_grammar.cpp split.cpp space.cpp)