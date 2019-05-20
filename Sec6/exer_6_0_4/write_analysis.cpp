//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "write_analysis.h"
#include "iostream"
#include <vector>
#include <string>
#include "Student_info.h"

using namespace std;

void write_analysis(std::ostream & out, const std::string & name, double analysis(const vector<Student_info> &),
                    const vector<Student_info> &did, const vector<Student_info> &didnt){
    out << name << ": median(did) = " << analysis(did) <<
                   ": median(didnt) = " << analysis(didnt) << endl;

}
