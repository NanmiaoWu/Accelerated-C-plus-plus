//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "average_analysis.h"
#include <vector>
#include "Student_info.h"
#include "average_grade.h"
#include <algorithm>
#include "median.h"

using namespace std;

double average_analysis(const vector<Student_info> &students) {
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), average_grade);
    return median(grades);
}
