//
// Created by Nanmiao Wu on 2019-04-12.
//

#include "extract_allLower.h"
#include "allLower.h"
#include <vector>
#include <string>

using namespace std;

vector<string> extract_allLower(vector<string> &words) {
    vector<string> words_allLower;

    // iterator for the vector words
    vector<string>::iterator iter = words.begin();
    while(iter != words.end()){
        if(allLower(*iter)){
            words_allLower.push_back(*iter);
            iter = words.erase(iter);
        } else
            ++iter;
    }

    return words_allLower;
}
