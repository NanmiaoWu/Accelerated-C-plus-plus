//
// Created by Nanmiao Wu on 2019-04-10.
//

#include "hcat.h"
#include "width.h"
#include <vector>
#include <string>

using namespace std;

vector<string> hcat(const vector<string> &left, const vector<string> &right) {
    vector<string> ret;

    // add 1 to leave a space between pictures
    string::size_type width1 = width(left) + 1;

    // indices to look at the elements from left and right respectively
    vector<string>::size_type i = 0, j = 0;

    // continue while either of the pictures has not finished
    string s;

    while( i != left.size() || j != right.size()){
        // reinitialize s;
        s = "";
        // copy from left
        if (i != left.size())
            s = left[i++];

        // pad spaces
        s += string(width1 - s.size(), ' ');

        // copy from right
        if(j != right.size())
            s += right[j++];

        ret.push_back(s);
    }

    return ret;

}

