//
//  decimal.cpp
//  Exercise4_4
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "decimal.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

int decimal (double num)
{
    num = num - int(num);
    stringstream ss;
    ss << num;
    string s;
    ss >> s;
    
    return s.length()-2;
}
