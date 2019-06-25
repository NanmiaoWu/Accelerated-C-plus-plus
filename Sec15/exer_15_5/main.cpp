#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t1 = {"red pepper", "onion", "tomato"};
    vector<string> t2 ={"Monday", "Tuesday", "Friday", "Saturday", "Sunday"};
    Picture p = t1;
    Picture q = t2;

    cout << hcat(p, q) << endl;

    cout << hcat(q, p) << endl;
    return 0;
}