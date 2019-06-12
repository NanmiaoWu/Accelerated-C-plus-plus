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
    virtual bool valid() const { return !homework.empty();}
    virtual bool met_require() const {
        return (std::find(homework.begin(), homework.end(), 0.0) == homework.end());
    }

    virtual ~Core(){ }

protected:
    std::istream& read_common(std::istream&);
    double midterm, final;
    std::vector<double> homework;

    virtual Core* clone() const {return new Core(*this);}

private:
    std::string n;

};

class Grad: public Core{
public:
    Grad(): thesis(0){}
    Grad(std::istream& is) {read(is);}

    double grade() const {return std::min(Core::grade(), thesis);}
    std::istream& read(std::istream&);
    bool met_require() const {return (thesis > 0.0);}

protected:
    Grad* clone() const {return new Grad(*this);}

private:
    double thesis;
};

class Fail_Pass: public Core{
public:
    // constructors
    Fail_Pass() { }
    Fail_Pass(std::istream& is) {Core::read(is);}

    // redefine grade function
    double grade() const{
        if(homework.empty()){
            return (0.5 * midterm + 0.5 * final);
        }
        return ::grade(midterm, final, homework);
    }

    bool passed() const {return grade() >= 60;}

protected:
    Fail_Pass* clone() const {return new Fail_Pass(*this);}

};


bool compare(const Core&, const Core&);
bool compare_Core_ptrs(const Core*, const Core*);
std::string letter_grade(double);
#endif //EXER_13_0_1_CORE_H
