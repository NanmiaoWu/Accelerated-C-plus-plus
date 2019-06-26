//
//  main.cpp
//  Exercise_4_2
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "square.hpp"
#include "countLength.hpp"

using std::cout;
using std::setw;
using std::endl;
using std::string;

int main()
{
    // total length for two columns
    int MaxLength = 10;
    
    // 0
    cout << "0"
    << string (MaxLength-2, ' ')
    << square(0)
    << endl;
    
    // from 1- 100
    for (int i = 1; i <= 100; ++i){
        cout << i
        << string(MaxLength-countLength(i)-countLength(square(i)), ' ')
        << square(i)
        << endl;
    }
        
    return 0;
}
