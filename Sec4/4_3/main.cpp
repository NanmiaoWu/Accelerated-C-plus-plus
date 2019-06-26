//
//  main.cpp
//  Exercise4_3
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "calcuWidth.hpp"

using std::cout;
using std::endl;
using std::setw;

int main() {
    
    int Max = 1000;
    for (int i = 0; i < 1000; ++i){
        cout << setw(calcuWidth(Max))
        << i
        << setw(calcuWidth(Max*Max))
        << i*i
        <<endl;
        
    }
    return 0;
}
