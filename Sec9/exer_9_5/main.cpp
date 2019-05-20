#include <iostream>
#include "Student_info.h"
#include "Pass_grade.h"
#include <vector>
using namespace std;

int main() {
    Pass_grade pf_grading;
    Student_info record;
    while(record.read(cin)){
        pf_grading.add_student(record);
    }
    pf_grading.print_grade();
    return 0;
}