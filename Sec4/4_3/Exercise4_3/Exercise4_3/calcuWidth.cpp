//
//  calcuWidth.cpp
//  Exercise4_3
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "calcuWidth.hpp"
#include <iomanip>

int calcuWidth (int i)
{
    int j=0;
    while(i>0){
        i = i / 10;
        ++j;
    }
    return j+1;
}
