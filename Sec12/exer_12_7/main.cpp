#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    Str t = "Eating an apple everyday is a good habit!";
    Str::const_iterator iter = t.begin();
    while(iter != t.end())
        cout << *iter++;
    return 0;
}