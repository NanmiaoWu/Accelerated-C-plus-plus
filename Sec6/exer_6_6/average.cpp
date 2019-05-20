//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "average.h"
#include <vector>
#include "Student_info.h"
#include <numeric>

using namespace std;

double average(const vector<double> &v) {
    return accumulate(v.begin(), v.end(), 0.0) / v.size();
}
