//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "tolower.h"
#include <string>
#include <cctype>

using namespace std;
string tolower(const string &s) {
    string s_lower;
    for(string::size_type i = 0; i != s.size(); ++i){
        s_lower.push_back(tolower(s[i]));
    }
    return s_lower;
}
