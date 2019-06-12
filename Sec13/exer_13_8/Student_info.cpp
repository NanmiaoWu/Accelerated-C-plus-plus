//
// Created by nanmiao on 6/11/19.
//

#include "Student_info.h"
#include "Core.h"
#include <iostream>
#include <stdexcept>

using namespace std;

istream& Student_info::read(istream& is){
    delete cp;

    char ch;
    is >> ch;

    if (ch == 'U'){
        cp = new Core(is);
    } else if (ch == 'G') {
        cp = new Grad(is);
    } else if (ch == 'P'){
        cp = new Fail_Pass(is);
    } else if (ch == 'A'){
        cp = new Audit(is);
    } else
        throw runtime_error("invalid student type");
    return is;
}

Student_info::Student_info(const Student_info& s): cp(0) {
    if (s.cp) cp = s.cp->clone();
}

Student_info& Student_info::operator=(const Student_info& s){
    if (&s != this){
        delete cp;
        if (s.cp)
            cp = s.cp->clone();
        else
            cp = 0;
    }
    return *this;
}