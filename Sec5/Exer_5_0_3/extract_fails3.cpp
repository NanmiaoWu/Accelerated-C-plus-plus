//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "extract_fails3.h"
#include <vector>
#include "Student_info.h"
#include "grade.h"

using namespace std;

vector<Student_info> extract_fails3(vector<Student_info>& students) {
    vector<Student_info> fail;
    vector<Student_info>::const_iterator iter = students.begin();
    while(iter != students.end()){
        if(fgrade(*iter)){
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}

