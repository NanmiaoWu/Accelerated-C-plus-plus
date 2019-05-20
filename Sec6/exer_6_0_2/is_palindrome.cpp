//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "is_palindrome.h"
#include <string>

using namespace std;

bool is_palindrome(const string &s) {
    return equal(s.begin(), s.end(), s.rbegin());
}
