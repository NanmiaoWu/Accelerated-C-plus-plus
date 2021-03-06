//
// Created by Nanmiao Wu on 2019-04-30.
//
#include <vector>
#include "Student_info.h"
#include <iterator>
#include "median.h"

template <class Function>
double analysis(const std::vector<Student_info>& students, Function grading_function){
    std::vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), grading_function);
    return median(grades);
}

template <class Function>
void write_analysis(std::ostream & out, const std::string& name,  Function grading_function,
                    const std::vector<Student_info>& did, const std::vector<Student_info>& didnt){
    out << name << ": median(did) = " << analysis(did, grading_function) <<
        ": median(didnt) = " << analysis(didnt, grading_function) << std::endl;

}