//
// Created by Nanmiao Wu on 2019-04-10.
//

#include "vcat.h"
#include <vector>
#include <string>

using namespace std;

vector<string> vcat(const vector<string> &top, const vector<string> &bottom) {
    vector<string> ret = top;

    // copy entire bottom picture
    ret.insert(ret.end(),bottom.begin(),bottom.end());
    return ret;
}

