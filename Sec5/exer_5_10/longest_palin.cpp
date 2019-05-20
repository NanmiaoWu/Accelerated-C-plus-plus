//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "longest_palin.h"
#include <vector>
#include <string>

using namespace std;
string longest_palin(const vector<string> & v) {
    string longest_v;
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter){
        if((*iter).size() > longest_v.size())
            longest_v =  *iter;
    }
    return longest_v;
}
