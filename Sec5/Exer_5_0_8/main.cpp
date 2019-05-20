#include <iostream>
#include <vector>
#include <string>
#include "hcat.h"
#include "frame.h"
#include "width.h"

using namespace std;

int main() {
    vector<string> P = {"this is an", "example", "to", "illustrate", "framing"};
    vector<string> right = frame(P);
    vector<string> ret = hcat(P, right);

    for(vector<string>::size_type i = 0; i != ret.size(); ++i){
        cout << ret[i] << endl;
    }
    return 0;
}