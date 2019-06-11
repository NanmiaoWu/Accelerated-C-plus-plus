#include <iostream>
#include "Core.h"

using namespace std;

int main() {
    Core c1;
    Grad g1;

    cout << "Enter Core Student info: " << endl;
    Core c2(cin);

    cout << "Enter Grad Student info: " << endl;
    Grad g2(cin);

    return 0;
}