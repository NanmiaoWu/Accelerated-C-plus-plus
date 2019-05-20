//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "hcat.h"
#include "width.h"
#include <vector>
#include <string>

using namespace std;

vector<string> hcat(const vector<string> &left, const vector<string> &right) {
    vector<string> ret;

    // indices to look at left and right parts respectively;
    vector<string>::size_type i = 0, j = 0;
    while( i != left.size() || j != right.size()){
        string s1;
        string s2;
        // copy from left
        if(i != left.size())
            s1 = left[i++];

        s2 = string(width(left) - s1.size(), ' ');
        s2 += s1;
        s2 += '\t';

        // copy from right
        if(j != right.size())
            s2 += right[j++];

        ret.push_back(s2);
    }
    return ret;
}
