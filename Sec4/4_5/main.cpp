//
//  main.cpp
//  Exercise4_5
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "read.hpp"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::istream;
using std::endl;
using std::sort;


int main() {
   // askk for words
    cout << "Enter words: ";
    
    vector<string> words;
    // read words;
    read(cin, words);
    
    typedef  vector<string>::size_type vec_sz;
    vec_sz size = words.size();
    // count the number of words
    cout <<"the number of words is: " << size << endl;
    
    // sort the vector by alphatize
    sort(words.begin(),words.end());
    
    string x = words[0];
    int count = 1;
    
    for (vec_sz i = 1; i < size; ++i){
        if (x != words[i]){
            cout << x << " : " << count << endl;
            x = words[i];
            count = 1;
        }
        else
            ++count;
    }
    
    cout << x << " : " << count << endl;
    
    return 0;
}
