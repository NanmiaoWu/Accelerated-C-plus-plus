//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "find_longestNon.h"
#include <vector>
#include <string>

using namespace std;
string find_longestNon(vector<string> &s) {
    string longestNon;
    vector<string>::iterator iter = s.begin();
    while(iter !=s.end()){
        if((*iter).size() > longestNon.size())
            longestNon = *iter;
        ++iter;
    }
    return longestNon;
}
