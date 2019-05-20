//
// Created by Nanmiao Wu on 2019-04-22.
//

#include "extract_did.h"
#include <vector>
#include "Student_info.h"
#include <algorithm>
#include "did_all_hw.h"

using namespace std;

vector<Student_info> extract_did(vector<Student_info> &students) {
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), did_all_hw);
    vector<Student_info> didnt(iter, students.end());
    students.erase(iter, students.end());
    return didnt;
}
