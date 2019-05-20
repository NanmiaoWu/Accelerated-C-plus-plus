//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "grade_aux.h"
#include "Student_info.h"
#include "grade.h"
#include <stdexcept>

using namespace std;

double grade_aux(const Student_info &s) {
    try{
        return grade(s);
    } catch(domain_error){
        return grade(s.midterm, s.final, 0);
    }
}
