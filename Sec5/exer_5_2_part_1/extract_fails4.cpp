//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "extract_fails4.h"
#include "grade.h"
#include <list>
#include "Student_info.h"

using namespace std;

list <Student_info> extract_fails4(list <Student_info>& students) {
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while(iter != students.end()){
        if(fgrade(*iter)){
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++ iter;
    }
    return fail;
}

