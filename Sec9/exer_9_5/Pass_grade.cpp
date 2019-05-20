//
// Created by Nanmiao Wu on 2019-05-06.
//

#include "Pass_grade.h"
#include <algorithm>
#include "Student_info.h"

using namespace std;

Pass_grade::Pass_grade(){}

void Pass_grade::add_student(Student_info record) {
    students.push_back(record);
    sort(students.begin(), students.end(), compare);
}

void Pass_grade::print_grade() const {
    for(vector<Student_info>::const_iterator i = students.begin(); i != students.end(); ++i){
        string pf = (i->pass())? "P":"F";
        cout << i->name() << ": " << pf << endl;
    }
}