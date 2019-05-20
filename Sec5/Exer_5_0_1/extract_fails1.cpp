//
// Created by Nanmiao Wu on 2019-04-08.
//
#include <vector>
#include <iostream>
#include "Student_info.h"
#include "grade.h"

using namespace std;
vector<Student_info> extract_fails1(vector<Student_info>& students)
{
    vector<Student_info> pass, fail;
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i)
    {
        if(fgrade(students[i]))
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);
    }
    students = pass;
    return fail;
}