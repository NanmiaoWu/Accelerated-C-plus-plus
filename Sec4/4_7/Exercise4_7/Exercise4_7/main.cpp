//
//  main.cpp
//  Exercise4_7
//
//  Created by Nanmiao Wu on 4/1/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::setprecision;
using std::streamsize;

int main() {
    // ask for numbers
    cout << "Enter numbers, "
    "followed by end-of-file: ";
    
    // store numbers into Num
    double x;
    vector<double> Num;
    while (cin >> x){
        Num.push_back(x);
    }
    
    // calculate average
    int count = 0;
    double sum = 0;
    
    typedef vector<double>::size_type vec_sz;
    vec_sz size = Num.size();
    
    // Invariant: calculated count numbers
    // sum = first count numbers
    for(vec_sz i = 0; i < size; ++i){
        sum += Num[i];
        ++ count;
    }
    
    double Ave = sum / count;
    streamsize prec = cout.precision();
    
    cout << "Avarage is: " << setprecision(3)
    << Ave << setprecision(prec) << endl;
    
    return 0;
}
