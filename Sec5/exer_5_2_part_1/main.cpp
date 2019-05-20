#include <iostream>
#include <list>
#include <string>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <stdexcept>
#include "Student_info.h"
#include "grade.h"
#include "extract_fails4.h"


using namespace std;

int main() {
    list<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store all records, and find the length of the longest name
    while(read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    list<Student_info> fail;
    fail = extract_fails4(students);

    // alphabetize the name
    // list not support full random properties.
    // Not use global sort function
    fail.sort(compare);
    students.sort(compare);

    //fail:
    cout << "Students fail: " << endl;
    list<Student_info>::iterator iter_1 = fail.begin();
    while(iter_1 != fail.end()){
        cout << (*iter_1).name
             << string(maxlen + 1 - (*iter_1).name.size(), ' ');
        try{
            double final_grade_1 = grade(*iter_1);
            streamsize prec = cout.precision();
            cout << setprecision(3)
                 << final_grade_1
                 << setprecision(prec)
                 <<endl;
            ++iter_1;
        } catch(domain_error e){
            cout << e.what();
        }
    }

    //pass:
    cout << "Students pass: " << endl;
    list<Student_info>::iterator iter_2 = students.begin();
    while(iter_2 != students.end()){
        cout << (*iter_2).name
             << string(maxlen + 1 - (*iter_2).name.size(), ' ');
        try{
            double final_grade_2 = grade(*iter_2);
            streamsize prec = cout.precision();
            cout << setprecision(3)
                 << final_grade_2
                 << setprecision(prec)
                 <<endl;
            ++ iter_2;

        } catch(domain_error e){
            cout << e.what();
        }
    }


    return 0;
}


