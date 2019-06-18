//
// Created by nanmiao on 6/17/19.
//

#ifndef EXER_14_0_2_STUDENT_INFO_H
#define EXER_14_0_2_STUDENT_INFO_H

#include <iostream>
#include <stdexcept>
#include "Core.h"
#include "Ptr.h"

class Student_info{
public:
    Student_info() { }
    Student_info(std::istream& is) {read(is);}

    std::istream& read(std::istream&);

    std::string name() const{
        if (cp)
            return cp->name();
        else
            throw std::runtime_error ("uninitialized student");
    }

    double grade() const{
        if (cp)
            return cp->grade();
        else
            throw std::runtime_error ("uninitialized student");
    }

    static bool compare(const Student_info& s1, const Student_info& s2){
        return s1.name() < s2.name();
    }

private:
    Ptr<Core> cp;

};

#endif //EXER_14_0_2_STUDENT_INFO_H
