//
// Created by Nanmiao Wu on 2019-05-06.
//

#include "Pass_grade.h"
#include <algorithm>
#include "Student_info.h"

using namespace std;

Pass_grade::Pass_grade(){}

void Pass_grade::add_pass_students(Student_info record){
    if (record.pass())
        pass_students.push_back(record);
    else
        fail_students.push_back(record);
    sort(pass_students.begin(), pass_students.end(), compare);
    sort(fail_students.begin(), fail_students.end(), compare);
}

void Pass_grade::print_grade() const {
    for(vector<Student_info>::const_iterator i = pass_students.begin(); i != pass_students.end(); ++i){
        cout << i->name() << ": " <<"P" << endl;
    }

    for(vector<Student_info>::const_iterator i = fail_students.begin(); i != fail_students.end(); ++i){
        cout << i->name() << ": " <<"F" << endl;
    }
}