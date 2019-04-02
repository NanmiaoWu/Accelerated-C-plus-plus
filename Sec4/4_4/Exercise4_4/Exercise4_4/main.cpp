//
//  main.cpp
//  Exercise4_4
//
//  Created by Nanmiao Wu on 3/28/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <ios>
#include "Width.hpp"
#include "decimal.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::streamsize;
using std::setprecision;

int main() {
    
    // ask for first number
    cout << "Enter a number that is between 0.0 and 100.0: ";
    double minNum;
    cin >> minNum;
    cout << endl;
    
    // ask for increment
    cout << "Enter an increment: ";
    double increment;
    cin >> increment;
    
    // ask for decimal place
    cout << "Enter the number of precision: ";
    int fixPresicion;
    cin >> fixPresicion;
    
    //get the largest value
    double maxNum = minNum;
    while(maxNum < 100.0){
        maxNum += increment;
    }
    
    maxNum -= increment;
    
    
    for(double i = minNum; i < 100.0; i += increment){
        streamsize prec = cout.precision();
        cout << setw(Width(maxNum, decimal(maxNum)))
        << i
        << setw(Width(maxNum * maxNum, decimal(maxNum * maxNum))+5)
        << setprecision(fixPresicion)
        << i * i
        << setprecision(prec)
        << endl;
    }
    
    
   
    return 0;
}








