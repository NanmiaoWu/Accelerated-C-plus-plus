//
// Created by Nanmiao Wu on 2019-04-17.
//

#include "frame.h"
#include <vector>
#include <string>
#include "width.h"

using namespace std;

vector<string> frame(const vector<string> &v) {
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // top
    ret.push_back(border);

    // write each interior row, bordered by an asterisk and a space
    vector<string>::const_iterator iter = v.begin();
    while(iter != v.end()){
        ret.push_back("* " + (*iter) + string(maxlen - (*iter).size(), ' ') + " *");
        ++iter;
    }

    // bottom
    ret.push_back(border);
    return ret;
}
