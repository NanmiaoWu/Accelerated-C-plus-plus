#include <iostream>
#include <vector>
#include <string>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <stdexcept>
#include <sstream>
#include "Student_info.h"
#include "grade.h"



using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store all records, and find the length of the longest name
    std::string line_content;
    while(std::getline(std::cin, line_content))
    {
        std::istringstream line_stream(line_content);
        read(line_stream, record);
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    // alphabetize the name
    sort(students.begin(), students.end(), compare);

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
    return 0;
}


