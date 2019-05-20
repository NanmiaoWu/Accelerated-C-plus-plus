#include <iostream>
#include <vector>
#include <string>
#include "Student_info.h"
#include "did_all_hw.h"
#include "extract_criteria.h"
#include "grade.h"


using namespace std;
int main() {
    vector<Student_info> students;
    Student_info student;

    cout << "Enter student information: " << endl;

    // read all records and separating students
    while(read(cin, student)){
        students.push_back(student);
    }

    // identify students who did and didnt do all the homework
    vector<Student_info> didnt = students;
    vector<Student_info> did = extract_criteria(didnt, did_all_hw);

    cout << "The following students did all homework: " << endl;
    for(vector<Student_info>::iterator i = did.begin(); i != did.end(); ++i){
        cout << (*i).name << endl;
    }

    cout << "The following students did not all homework: " << endl;
    for(vector<Student_info>::iterator i = didnt.begin(); i != didnt.end(); ++i){
        cout << (*i).name << endl;
    }

    // identify students who pass and fail
    vector<Student_info> pass = students;
    vector<Student_info> fail = extract_criteria(pass, fgrade);

    cout << "The following students fail: " << endl;
    for(vector<Student_info>::iterator i = fail.begin(); i != fail.end(); ++i){
        cout << (*i).name << endl;
    }

    cout << "The following students pass: " << endl;
    for(vector<Student_info>::iterator i = pass.begin(); i != pass.end(); ++i){
        cout << (*i).name << endl;
    }
    return 0;
}
