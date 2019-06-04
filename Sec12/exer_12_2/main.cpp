#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    // c_str functions
    Str t = "Hello, world";
    const char* c_str = t.c_str();
    cout << c_str << endl;

    // data function
    const char* data = t.data();
    t[6] = 'W';
    cout << data << endl;

    return 0;
}