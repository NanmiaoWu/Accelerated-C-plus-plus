//
// Created by Nanmiao Wu on 2019-04-11.
//
#include <vector>
#include <string>
#include "unrotate.h"
#include "hcat.h"
#include <algorithm>

using namespace std;
vector<string> unrotate(vector<string> &v) {
    vector<string> ret;

    vector<string>::const_iterator iter = v.begin();

    vector<string> v_right, v_left;

    typedef string::size_type string_sz;

    while(iter != v.end()){
        // find separator

        string_sz separator = iter -> find('\t');

        // left and right parts
        v_left.push_back(iter -> substr(separator + 1, (*iter).size() - 1));
        v_right.push_back(iter -> substr(0, separator));
        ++ iter;
    }

    ret = hcat(v_left, v_right);

    return ret;
}
