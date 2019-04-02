//
//  read.cpp
//  Exercise4_5
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "read.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::istream;

istream& read(istream& in, vector<string>& words){
    
    string x;
    while (in >> x){
        words.push_back(x);
    }
    return in;
}

