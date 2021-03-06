//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "average_grade.h"
#include "Student_info.h"
#include "average.h"
#include "grade.h"

double average_grade(const Student_info &s) {
    return grade(s.midterm, s.final, average(s.homework));
}
