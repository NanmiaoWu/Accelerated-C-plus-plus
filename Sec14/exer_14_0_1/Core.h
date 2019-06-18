//
// Created by nanmiao on 6/11/19.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "grade.h"

#ifndef EXER_13_0_1_CORE_H
#define EXER_13_0_1_CORE_H

class Core{
    friend class Student_info;

public:
    Core(): midterm(0), final(0){ }
    Core(std::istream& is){read(is);}

    std::string name() const {return n;}

    virtual std::istream& read(std::istream&);
    virtual double grade() const {return ::grade(midterm, final, homework);}

    virtual ~Core(){ }

    virtual Core* clone() const {return new Core(*this);}

protected:
    std::istream& read_common(std::istream&);
    double midterm, final;
    std::vector<double> homework;

private:
    std::string n;

};

class Grad: public Core{
public:
    Grad(): thesis(0){}
    Grad(std::istream& is) {read(is);}

    double grade() const {return std::min(Core::grade(), thesis);}
    std::istream& read(std::istream&);

protected:
    Grad* clone() const {return new Grad(*this);}

private:
    double thesis;
};

bool compare(const Core&, const Core&);
bool compare_Core_ptrs(const Core*, const Core*);

#endif //EXER_13_0_1_CORE_H
