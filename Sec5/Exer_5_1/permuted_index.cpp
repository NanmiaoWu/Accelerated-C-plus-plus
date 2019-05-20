//
// Created by Nanmiao Wu on 2019-04-11.
//

#include "permuted_index.h"
#include <vector>
#include <string>
#include "rotate.h"
#include "compare_ignore_case.h"
#include "unrotate.h"

using namespace std;

vector<string> permuted_index(const vector<string> &v){
    vector<string>::const_iterator iter = v.begin();
    vector<string> permuted_v;

    // rotate
    while(iter != v.end()){
        vector<string> rotate_v = rotate(*iter++);
        permuted_v.insert(permuted_v.end(),rotate_v.begin(), rotate_v.end());
    }

    // sort
    sort(permuted_v.begin(), permuted_v.end(), compare_ignore_case);

    // unrotate
    permuted_v = unrotate(permuted_v);

    return permuted_v;

}