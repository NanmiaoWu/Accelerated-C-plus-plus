//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "extract_AscenOrDecen.h"
#include <vector>
#include <string>
#include "is_AscenOrDecen.h"

using namespace std;
vector<string> extract_AscenOrDecen(vector<string> &s) {
    vector<string> s_AscenOrDecen;
    vector<string>::iterator iter = s.begin();
    while(iter != s.end()){
        if(is_AscenOrDecen(*iter)){
            s_AscenOrDecen.push_back(*iter);
            iter = s.erase(iter);
        } else
            ++iter;
    }

    return s_AscenOrDecen;
}
