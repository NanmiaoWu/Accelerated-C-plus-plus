#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t1 = {"eating an apple", "every day", "is good" };
    vector<string> t2 = {"watermelon", "orange", "blueberry"};

    cout << frame(t1) << endl;

    cout << frame(t2) << endl;

    cout << hcat(frame(t1), t2) << endl;

    cout << vcat(t1, frame(t2)) << endl;
    return 0;
}