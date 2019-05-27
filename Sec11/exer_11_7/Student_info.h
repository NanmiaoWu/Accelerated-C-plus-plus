//
// Created by Nanmiao Wu on 2019-05-06.
//

#ifndef EXER_11_7_STUDENT_INFO_H
#define EXER_11_7_STUDENT_INFO_H

#include <iostream>
#include <string>
#include "Vec.h"

class Student_info{
public:
    Student_info();
    Student_info(std::istream&);
    std::string name() const {return n;}
    bool valid() const {return !homework.empty();}
    std::istream& read(std::istream&);
    double grade() const;

private:
    std::string n;
    double midterm, final;
    Vec<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif //EXER_11_7_STUDENT_INFO_H
