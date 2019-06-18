//
// Created by nanmiao on 6/17/19.
//

#include "Student_info.h"

#include <iostream>

using namespace std;

istream& Student_info::read(istream& is) {
    char ch;
    is >> ch;

    if (ch == 'U')
        cp = new Core(is);
    else
        cp = new Grad(is);
    return is;

}
