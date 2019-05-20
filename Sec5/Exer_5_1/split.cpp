//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "split.h"
#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> split(const string &s) {
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){
        //ignore leading blanks
        //invariant: characters in range [original i, current i) are all spaces
        while(i != s.size() && isspace(s[i]))
            ++i;

        // find end of next word
        string_size j = i;
        while(j != s.size() && !isspace(s[j]))
            ++j;

        // if we found nonwhilespace characters
        if(i != j){
            // copy from s starting at i and taking j-i chars
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }

    return ret;
}

