//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "find_urls.h"
#include <vector>
#include <string>
#include "url_begin.h"
#include "url_end.h"
using namespace std;

vector<string> find_urls(const string &s) {
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin(), e = s.end();

    // look through the entire input
    while(b != e){

        // look for one or more letters followed by ://, which is the protocol name
        b = url_begin(b, e);

        // if we found it
        if(b !=e){
            // get the rest URL
            iter after = url_end(b, e);

            // remember the URL
            ret.push_back(string(b, after));

            // advance b and check for more URLs on this line
            b = after;

        }

    }
    return ret;
}
