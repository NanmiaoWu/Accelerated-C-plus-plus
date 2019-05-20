//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "split.h"
#include "not_space.h"
#include "space.h"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split(const string &str) {
    vector<string> ret;
    typedef string::const_iterator iter;
    iter i = str.begin();
    while( i != str.end()){
        // ignore leading blanks
        i = find_if(i, str.end(), not_space);

        // find the end of the word
        iter j = find_if(i, str.end(), space);

        // copy the word of [i, j)
        if (i != str.end()){
            ret.push_back(string(i, j));
        }
        i = j;
    }
    return ret;
}
