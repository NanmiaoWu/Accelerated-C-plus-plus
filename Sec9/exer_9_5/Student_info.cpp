//
// Created by Nanmiao Wu on 2019-05-06.
//

#include "Student_info.h"
#include "grade.h"

using namespace std;


bool compare(const Student_info& x, const Student_info& y){
    return x.name() < y.name();
}

Student_info::Student_info(): midterm(0), final(0) {}

Student_info::Student_info(istream& is) {read(is);}

istream& Student_info::read(istream& in){
    in >> n >> midterm >> final;
    return in;
}

bool Student_info::pass() const {
    return (midterm + final) / 2 > 60.0;
}
