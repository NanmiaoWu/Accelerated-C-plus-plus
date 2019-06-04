#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    Str name = "Nan";
    if (name)
        cout << "Hello " << name << "!" << endl;

    Str last_name;
    if (last_name)
        cout << "Hello " << last_name << "!" << endl;
    return 0;
}