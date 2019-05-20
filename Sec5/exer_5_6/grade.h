//
// Created by Nanmiao Wu on 2019-04-06.
//

#ifndef EXER_5_0_1_GRADE_H
#define EXER_5_0_1_GRADE_H

#include "Student_info.h"
#include <vector>

double grade(const Student_info&);

double grade(double, double, const std::vector<double>&);

double grade(double, double, double);

bool fgrade(const Student_info&);

#endif //EXER_5_0_1_GRADE_H
