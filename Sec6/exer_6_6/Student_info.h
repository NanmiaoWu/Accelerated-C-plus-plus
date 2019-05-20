//
// Created by Nanmiao Wu on 2019-04-06.
//

#ifndef EXER_5_0_1_STUDENT_INFO_H
#define EXER_5_0_1_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

std::istream& read(std::istream&, Student_info&);

std::istream& read_hw(std::istream&, std::vector<double>&);
#endif //EXER_5_0_1_STUDENT_INFO_H
