//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "width.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string::size_type width(const vector<string> & v){
    string::size_type maxlen = 0;
    for(vector<string>::size_type i = 0; i != v.size(); ++i){
        maxlen = max(maxlen, v[i].size());
    }
    return maxlen;
}