//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "extract_fails2.h"
#include "Student_info.h"
#include "grade.h"
#include <vector>

using namespace std;

vector<Student_info> extract_fails2(vector<Student_info>& students) {
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
    // invariant: elements [0, i) of students represent passing grade
    while(i != students.size()){
        if(fgrade(students[i])){
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }
        else
            ++i;
    }
    return fail;
}

