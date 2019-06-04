#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    Str name = "Nan";
    Str greeting = "Hello, " + name + "!";

    cout << greeting << endl;
    return 0;
}