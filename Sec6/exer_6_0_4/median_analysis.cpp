//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "median_analysis.h"
#include <vector>
#include "Student_info.h"
#include <algorithm>
#include "grade_aux.h"
#include "median.h"

using namespace std;
double median_analysis(const vector<Student_info> &students) {
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
    return median(grades);
}
