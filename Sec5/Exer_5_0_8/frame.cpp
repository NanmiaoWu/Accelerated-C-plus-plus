//
// Created by Nanmiao Wu on 2019-04-09.
//

#include "frame.h"
#include <vector>
#include <string>
#include "width.h"

using namespace std;

vector<string> frame(const vector<string> &v) {
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, ' *');

    // write the top border
    ret.push_back(border);

    // write each interior row, bordered by an asterisk and a space
    for(vector<string>::size_type i = 0; i != v.size(); ++i){
        ret.push_back("* " + v[i] +
                      string(maxlen - v[i].size(), ' ') + "*");
    }

    // write the bottom border
    ret.push_back(border);
    return ret;
}

