#include <iostream>
#include <string>
#include <vector>
#include "split.h"

using namespace std;

int main() {
    string s = "Eating an apple everyday keeps the doctor away ";

    vector<string> v = split(s);

    // write each word in v
    for(vector<string>::size_type i = 0; i != v.size(); ++i){
            cout << v[i] << endl;
    }
    return 0;
}
