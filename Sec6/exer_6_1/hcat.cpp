//
// Created by Nanmiao Wu on 2019-04-17.
//

#include "hcat.h"
#include <vector>
#include <string>
#include "width.h"

using namespace std;

vector<string> hcat(const vector<string> &left, const vector<string> &right) {
    vector<string> ret;

    // add one to leave a space between two pictures
    string::size_type width1 = width(left) + 1;

    // two indices for left and right picture, respectively
    typedef vector<string>::const_iterator iter;
    iter i = left.begin();
    iter j = right.begin();

    // look through all rows for both pictures
    while(i != left.end() || j != right.end()){
        string s;
        if( i != left.end()){
            s = *i;
            ++i;
        }

        s += string(width1 - s.size(), ' ');
        if(j != right.end()){
            s += *j;
            ++j;
        }
        ret.push_back(s);

    }
    return ret;
}
