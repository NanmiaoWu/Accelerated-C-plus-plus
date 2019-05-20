//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "url_begin.h"
#include <string>
#include <algorithm>
#include <cctype>
#include "not_url_char.h"

using namespace std;

string::const_iterator url_begin(string::const_iterator b, string::const_iterator e) {
    static const string sep = "://";
    typedef string::const_iterator iter;

    // i marks where the separator was found
    iter i = b;
    while( (i = search(i, e, sep.begin(), sep.end())) != e){
        // make sure separator is not the beginning or the end
        if( i != b && i + sep.size() != e){
            // beg marks the beginning of the protocal-name
            iter beg = i;
            while(beg != b && isalpha(beg[-1])){
                --beg;
            }

            // is there at least one appropriate character before and after the separator
            if(beg != i && !not_url_char(i[sep.size()])){
                return beg;
            }
        }
        // the separator we found was not part of a URL
        i += sep.size();
    }
    return e;
}
