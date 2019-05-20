//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "compare_ignore_case.h"
#include <string>


using namespace std;

bool compare_ignore_case(const string &x, const string &y) {
    string x2 = x, y2 = y;
    return compare(x2, y2);
}

bool compare(string &x2, string &y2){
    transform(x2.begin(), x2.end(), x2.begin(), ::tolower);
    transform(y2.begin(), y2.end(), y2.begin(), ::tolower);
    return x2 < y2;
}
