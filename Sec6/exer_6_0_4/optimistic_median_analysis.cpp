//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "optimistic_median_analysis.h"
#include "Student_info.h"
#include <vector>
#include "optimistic_median.h"
#include <algorithm>
#include "median.h"

using namespace std;
double optimistic_median_analysis(const vector<Student_info> &students) {
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);
    return median(grades);
}
