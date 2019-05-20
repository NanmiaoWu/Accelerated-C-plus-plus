//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "center.h"
#include "width.h"
#include "padding.h"
#include <vector>
#include <string>

using namespace std;

vector<string> center(const vector<string> &v) {
    vector<string> ret;
    string::size_type maxlen = width(v);
    vector<string>::size_type i = 0;
    string s;
    while( i != v.size()){
        s = v[i];
        s = padding(s, maxlen);
        ret.push_back(s);
        ++i;
    }
    return ret;
}
