//
//  grade.cpp
//  Exercise4_6
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "grade.hpp"
#include <vector>
#include <stdexcept>
#include "median.hpp"

using std::vector;
using std::domain_error;

double grade(vector<double>& grades){
    if (grades.size() < 3)
        throw domain_error("Student has done no homework");
    double midterm, final;
    midterm = grades[0];
    final = grades[1];
    return 1;
}

double grade(double, double, const std::vector<double>&)
{
    
}
