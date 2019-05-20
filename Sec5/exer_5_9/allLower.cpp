//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "allLower.h"
#include <string>
#include <cctype>

using namespace std;

bool allLower(const string &s) {
    // index for s
    string::size_type count = 0;
    for(string::size_type i = 0; i != s.size(); ++i){
        if(islower(s[i])){
            ++count;
        }
    }
    // all are lowercase
    if(count  == s.size())
        return true;
    // at least one uppercase
    else
        return false;
}
