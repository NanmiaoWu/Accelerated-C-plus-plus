//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "extract_fails.h"
#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <algorithm>

using namespace std;

vector<Student_info> extract_fails(vector<Student_info> &students) {
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade);
    vector<Student_info> fail(iter, students.end());
    students.erase(iter, students.end());
    return fail;
}
