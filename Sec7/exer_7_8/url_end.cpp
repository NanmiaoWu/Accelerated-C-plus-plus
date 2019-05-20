//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "url_end.h"
#include <string>
#include <algorithm>
#include "not_url_char.h"

using namespace std;

string::const_iterator url_end(string::const_iterator b, string::const_iterator e) {
    return find_if(b, e, not_url_char);
}
