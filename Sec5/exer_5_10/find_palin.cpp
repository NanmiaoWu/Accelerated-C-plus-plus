//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "find_palin.h"
#include "is_palin.h"
#include <vector>
#include <string>

using namespace std;
vector<string> find_palin(vector<string> &words) {

    vector<string> words_palin;
    vector<string>::iterator iter = words.begin();
    while(iter != words.end()){
        if(is_palin(*iter)){
            words_palin.push_back(*iter);
        }
        ++iter;
    }
    return words_palin;
}
