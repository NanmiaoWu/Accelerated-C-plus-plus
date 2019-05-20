//
// Created by Nanmiao Wu on 2019-04-22.
//

#include "do_analysis.h"
#include "Student_info.h"
#include <vector>
#include "median.h"
#include <algorithm>

using namespace std;

double do_analysis(const vector<Student_info> &students, double method(const Student_info &)) {
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), method);
    return(median(grades));

    return 0;
}
