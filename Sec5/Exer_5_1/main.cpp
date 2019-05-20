#include <iostream>
#include <vector>
#include <string>
#include "rotate.h"
#include "split.h"
#include "vcat.h"
#include "compare_ignore_case.h"
#include "permuted_index.h"

using namespace std;

int main() {
    vector<string> P = {"The quick brown fox", "jumped over the fence"};

    vector<string> permuted_v = permuted_index(P);
    vector<string>::const_iterator iter = permuted_v.begin();

    while(iter != permuted_v.end()){
        cout << *iter++ << endl;
    }

    return 0;
}