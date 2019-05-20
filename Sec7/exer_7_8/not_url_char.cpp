//
// Created by Nanmiao Wu on 2019-04-16.
//

#include <string>
#include "not_url_char.h"
#include <cctype>
#include <algorithm>

using namespace std;

bool not_url_char(char c) {
    // characters, in addition to letters and numbers, that can appear in a URL
    static const string url_ch = "~;/?:@=&$-_.*(),";

    // see whether c can appear in a URL and return the negative
    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}
