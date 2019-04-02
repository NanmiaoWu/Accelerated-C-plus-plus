//
//  Width.cpp
//  Exercise4_4
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "Width.hpp"

int Width(double n, int deci_num){
    int result = deci_num;
    
    while (n >= 1){
        n = n/10;
        ++result;
    }
    return result;
}
