//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "padding.h"
#include "width.h"
#include <string>

using namespace std;

string padding(const string &s, const string::size_type &w) {
    string v;
    typedef string::size_type string_sz;
    string_sz padWidth = w - s.size();
    string_sz leftPad = 0, rightPad = 0;

    // calculate left and right padding
    if (padWidth % 2 == 0){
        leftPad = padWidth / 2;
        rightPad = leftPad;
    } else{
        leftPad = (padWidth + 1) / 2;
        rightPad = leftPad - 1;
    }
    // add left and right padding
    v = string(leftPad, ' ');
    v += s;
    v += string(rightPad, ' ');
    return v;
}
