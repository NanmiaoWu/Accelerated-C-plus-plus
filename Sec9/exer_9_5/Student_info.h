//
// Created by Nanmiao Wu on 2019-05-06.
//

#ifndef EXER_9_0_STUDENT_INFO_H
#define EXER_9_0_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

class Student_info{
public:
    Student_info();
    Student_info(std::istream&);
    std::string name() const {return n;}
    std::istream& read(std::istream&);
    bool pass() const;

private:
    std::string n;
    double midterm, final;
};

bool compare(const Student_info&, const Student_info&);

#endif //EXER_9_0_STUDENT_INFO_H
