#include <iostream>
#include <vector>
#include <string>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <stdexcept>
#include "Student_info.h"
#include "grade.h"
#include "extract_fails2.h"


using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store all records, and find the length of the longest name
    while(read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    vector<Student_info> fail;
    fail = extract_fails2(students);

    // alphabetize the name
    sort(fail.begin(), fail.end(), compare);
    sort(students.begin(), students.end(), compare);

    // fail
    cout << "Students fail: " << endl;
    for( vector<Student_info>::size_type i = 0; i !=fail.size(); ++i){
        // write the name, padded on the right to maxlen + 1 character
        cout << fail[i].name
             << string (maxlen +1 - fail[i].name.size(), ' ');

        // computer and write the grade
        try{
            double final_grade = grade(fail[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        } catch(domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }

    // pass
    cout << "Students pass: " << endl;
    for( vector<Student_info>::size_type i = 0; i !=students.size(); ++i){
        // write the name, padded on the right to maxlen + 1 character
        cout << students[i].name
             << string (maxlen +1 - students[i].name.size(), ' ');

        // computer and write the grade
        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        } catch(domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
/*
    // alphabetize the name
    sort(students.begin(), students.end(), compare);

 */

/*
    // write the name and record
    for( vector<Student_info>::size_type i = 0; i != students.size(); ++i ){

        // write the name, padded on the right to maxlen + 1 character
        cout << students[i].name
        << string (maxlen +1 - students[i].name.size(), ' ');

        // computer and write the grade
        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        } catch(domain_error e) {
            cout << e.what();
        }
        cout << endl;

    }
    */
    return 0;
}


