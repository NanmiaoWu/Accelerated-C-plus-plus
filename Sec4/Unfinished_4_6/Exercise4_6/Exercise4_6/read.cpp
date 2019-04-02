//
//  read.cpp
//  Exercise4_6
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "read.hpp"
#include <iostream>
#include <istream>
#include <vector>

using std::istream;
using std::vector;

istream& read(istream& in, vector<double>& grades)
{
    if (in){
        // get rid of previous contents
        grades.clear();
        
        double x;
        while (in >> x){
            grades.push_back(x);
        }
        
        // clear the stream so that the input work of next student
        in.clear();
    }    
    return in;
}
