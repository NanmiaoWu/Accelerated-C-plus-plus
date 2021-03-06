//
// Created by Nanmiao Wu on 2019-04-06.
//

#include "Student_info.h"
#include "grade.h"
#include "median.h"
#include <stdexcept>
#include <vector>

using namespace std;

double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}

double grade(double midterm, double final , const vector<double>& hw) {
    if (hw.size() == 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

bool fgrade(const Student_info& s) {
    return grade(s) < 60;
}

bool pgrade(const Student_info& s) {
    return grade(s) >= 60;
}
