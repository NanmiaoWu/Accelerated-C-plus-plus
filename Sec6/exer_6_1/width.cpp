//
// Created by Nanmiao Wu on 2019-04-17.
//

#include "width.h"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string::size_type width(const vector<string> &v) {
    string::size_type maxlen = 0;
    vector<string>::const_iterator iter = v.begin();
    while(iter != v.end()){
        maxlen = max(maxlen, (*iter).size());
        ++iter;
    }
    return maxlen;
}
