//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "lowerCase.h"
#include <string>
#include <cctype>

using namespace std;
string lowerCase(const string &s) {
    string s_lowerCase;
    for(string::size_type i = 0; i != s.size(); ++i){
        s_lowerCase.push_back(tolower(s[i]));
    }
    return s_lowerCase;
}
