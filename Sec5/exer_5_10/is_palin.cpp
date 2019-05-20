//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "is_palin.h"
#include "lowerCase.h"
#include <string>
#include <cctype>

using namespace std;

bool is_palin(const string &v) {
    string v_lower = lowerCase(v);
    string::const_iterator iter = v_lower.begin();
    string::const_reverse_iterator riter = v_lower.rbegin();
    while(iter != riter.base() && iter + 1 != riter.base()){
        if(*iter != *riter)
            return false;
        else{
            ++iter;
            ++riter;
        }

    }
    return true;
}
