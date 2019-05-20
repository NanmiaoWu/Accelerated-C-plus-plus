//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "extract_fails.h"
#include "Student_info.h"
#include "grade.h"
#include <vector>

using namespace std;

vector<Student_info> extract_fails(vector<Student_info> &students) {
    vector<Student_info> fail;
    vector<Student_info>::size_type count = 0, i = 0;

    while(i != students.size()){
        if(fgrade(students[i]))
            fail.push_back(students[i]);
        else{
            students[count++] = students[i];
        }
        ++i;
    }
    students.resize(count);
    return fail;
}
