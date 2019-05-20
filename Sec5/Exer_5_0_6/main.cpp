#include <iostream>
#include <algorithm>
#include "width.h"
#include "frame.h"
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> P = {"this is an",  "example", "to", "illustrate", "framing"};
    vector<string> ret = frame(P);
    for(vector<string>::size_type i = 0; i != ret.size(); ++i){
        cout << ret[i] << endl;
    }
    return 0;
}