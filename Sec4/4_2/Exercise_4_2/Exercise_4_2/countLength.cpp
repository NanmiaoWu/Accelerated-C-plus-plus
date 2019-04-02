//
//  countLength.cpp
//  Exercise_4_2
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "countLength.hpp"
#include <iostream>

int countLength (int x)
{
    int i=0;
    while(x!=0){
        x = x / 10;
        ++i;
    }
    return i;
}
