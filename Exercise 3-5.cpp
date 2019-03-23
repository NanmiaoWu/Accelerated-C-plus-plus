
//3-5

#include <iostream>
#include <string>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::sort;

int main()
{
    const int max_grade_num = 3;
    
    vector<string> names;
    vector<double> grades;
    
    
    cout << "Please enter the first student's name: ";
    string name;
    
    int grade;
    int grade_count;
    
    while (cin >> name){
        cout << "Please enter " << max_grade_num << " grades for " << name << " :";
        
        names.push_back(name);
        
        grade_count = 0;
        while (grade_count < max_grade_num && cin >> grade){
            grades.push_back(grade);
            ++grade_count;
        }
        
        cout << "Please enter the next student's name"
        << " or end-of-file to exit: ";
    }
    
    cout << endl;
    cout << "** Grades and averages for each student **" << endl;
    
    
    typedef vector<string>::size_type vec_sz_name;
    vec_sz_name name_size = names.size();
    
    typedef vector<double>::size_type vec_sz_grade;
    vec_sz_grade grade_index = 0;
    
    for (vec_sz_name i = 0; i < name_size; ++i ) {
        cout << "Average grade for " << names[i] <<" is :";
        
        double grade_sum = 0;
        for (grade_count = 0; grade_count < max_grade_num; ++grade_count) {
            grade_sum += grades[grade_index];
            ++grade_index;
        }
        
        streamsize prec = cout.precision();
        cout << setprecision(3)
        << grade_sum/max_grade_num
        << setprecision(prec)
        << endl;
    }
    
    return 0;
}
