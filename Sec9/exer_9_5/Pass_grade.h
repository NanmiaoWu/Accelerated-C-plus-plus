//
// Created by Nanmiao Wu on 2019-05-06.
//

#ifndef EXER_9_5_PASS_GRADE_H
#define EXER_9_5_PASS_GRADE_H

#include "Student_info.h"
#include <vector>

class Pass_grade{
public:
    // default constructor
    Pass_grade();
    void add_student(Student_info);
    void print_grade() const;
private:
    std::vector<Student_info> students;
};

#endif //EXER_9_5_PASS_GRADE_H
