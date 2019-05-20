//
// Created by Nanmiao Wu on 2019-04-22.
//

#include "extract_criteria.h"
#include <vector>
#include "Student_info.h"
#include <algorithm>

using namespace std;

vector<Student_info> extract_criteria(vector<Student_info> &students, bool criteria(const Student_info &)) {
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), criteria);
    vector<Student_info> pass_criteria(students.begin(), iter);
    students.erase(students.begin(), iter);
    return pass_criteria;
}
