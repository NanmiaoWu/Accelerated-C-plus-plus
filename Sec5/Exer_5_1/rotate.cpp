//
// Created by Nanmiao Wu on 2019-04-10.
//

#include "rotate.h"
#include "split.h"
#include <vector>
#include <string>
#include <cctype>

using namespace std;


vector<string> rotate(const string &s) {
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){
        while(i != s.size() && isspace(s[i]))
            ++i;

        string_size j = i;
        while(j != s.size() && !isspace(s[j]))
            ++j;

        if(i != j){
            string line = s.substr(i, s.size() - i);
            line += '\t';
            line += s.substr(0, i);
            ret.push_back(line);
            i = j;
        }
    }

    return ret;
}

