//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "extract_fails.h"
#include "Student_info.h"
#include <vector>
#include <algorithm>
#include "grade.h"

using namespace std;
vector<Student_info> extract_fails(vector<Student_info> &students) {
    vector<Student_info> fail;
    remove_copy_if(students.begin(), students.end(), back_inserter(fail), pgrade);
    students.erase(remove_if(students.begin(), students.end(), fgrade),students.end());
    return fail;
}
