#include <iostream>
#include <vector>
#include <string>
#include "center.h"

using namespace std;

int main() {
    vector<string> P = {"this is an", "example", "to", "illustrate"};
    vector<string> P_center = center(P);
    for(vector<string>::size_type i = 0; i != P_center.size(); ++i){
        cout << P_center[i] << endl;
    }
    return 0;
}