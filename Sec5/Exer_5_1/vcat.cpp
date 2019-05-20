//
// Created by Nanmiao Wu on 2019-04-11.
//
#include <vector>
#include <string>
#include "vcat.h"

using namespace std;

vector<string> vcat(const vector<string> &top, const vector<string> &bottom){
    // copy the top
    vector<string> ret = top;

    // copy the bottom
    for(vector<string>::const_iterator iter = bottom.begin(); iter != bottom.end(); ++iter){
        ret.push_back(*iter);
    }
    return ret;
}