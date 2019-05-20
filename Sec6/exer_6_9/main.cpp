#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main() {
    string s = "apple";
    vector<string> vec(20, s);
    string ret =  accumulate(vec.begin(), vec.end(), string(""));
    cout << ret << endl;
    return 0;
}