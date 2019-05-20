//
// Created by Nanmiao Wu on 2019-04-24.
//

#include "bracketed.h"
#include <string>

using namespace std;

bool bracketed(const string &s) {
    return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}
