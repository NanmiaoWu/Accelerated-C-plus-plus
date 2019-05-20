//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "write_analysis.h"
#include "iostream"
#include <vector>
#include <string>
#include "Student_info.h"
#include "do_analysis.h"

using namespace std;

void write_analysis(std::ostream & out, const std::string & name, double method(const Student_info &),
                    const vector<Student_info> &did, const vector<Student_info> &didnt){
    out << name << ": median(did) = " << do_analysis(did, method) <<
                   ": median(didnt) = " << do_analysis(didnt, method) << endl;

}
