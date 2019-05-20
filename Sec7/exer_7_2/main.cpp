//
//  main.cpp
//  Sec4_0_1
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <map>
#include "Student_info.h"
#include "grade.h"
#include "LettGrade.h"

using namespace std;


int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store
    while(read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    map<string, int> counters;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
       double final_grade = grade(students[i]);
       string letter = LettGrade(final_grade);
       ++counters[letter];
    }

    for(map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it){
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}

