//
//  main.cpp
//  MyFirstCPlusPlusCode
//
//  Created by Nanmiao Wu on 3/12/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.


// 3-4
/*
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
    cout<<"Please enter strings, "
    <<"followed by end-of-file:"<<endl;
    
    
    vector<string> words;
    string x;
    while(cin>>x){
        words.push_back(x);
    }
    typedef vector<string>::size_type vc_sz;
    vc_sz size=words.size();
    
    if(size==0){
        cout<<"Please enter words. "
        <<"Please try again."<<endl;
        return 1;
    }
    
    sort(words.begin(), words.end());
    
    x=words[0];
    string::size_type short_str, long_str;
    short_str=x.length();
    long_str=x.length();
    
    // invariant: the shortest string length is short_str
    // the longest string length is long_str
    
    for(int i=1; i<size;++i){
        string s=words[i];
        if(s.length()<short_str){
            short_str=s.length();
        }
        else if(s.length()>long_str){
            long_str=s.length();
        }
    }
    cout<<"Longest length is: "<<long_str<<endl;
    cout<<"Shortest length is: "<<short_str<<endl;
    return 0;
}
*/




//3-5
/*
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
*/

// 3-6
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
    // ask for and read student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    
    // ask for and read midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    // ask for homework grades
    cout << "Enter all your homework grades, "
    << "followed by end-of-file: ";
    
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    
    // a variable into which to read
    double x;
    
    // invariant:
    // we have read count grades so far, and
    // sum is the sum of first count grades
    while (cin >> x) {
        ++count;
        sum += x;
    }
    
    streamsize prec = cout.precision();
    // if there is no homework
    if ( count == 0){
        // write the result
        cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final
        << setprecision(prec) <<endl;
    }
    else {
        // write the result
        cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final +0.4 * sum / count
        << setprecision(prec) <<endl;
    }
    
    
    return 0;
}
