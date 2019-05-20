//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "is_AscenOrDecen.h"
#include "tolower.h"
#include <string>

using namespace std;
bool is_AscenOrDecen(const string &s) {
    string s_lower = tolower(s);
    for(string::size_type i = 0; i !=s_lower.size(); ++i){
        if(s_lower[i] == 'b' || s_lower[i] == 'd' || s_lower[i] == 'f' ||
                s_lower[i] == 'h' || s_lower[i] == 'k' || s_lower[i] == 'l' ||
                s_lower[i] == 't' || s_lower[i] == 'g' || s_lower[i] == 'j' ||
                s_lower[i] == 'p' || s_lower[i] == 'q' || s_lower[i] == 'y'){
            return true;
        }

    }
    return false;
}
