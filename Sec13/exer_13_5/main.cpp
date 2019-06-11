#include <iostream>
#include "Core.h"

using namespace std;

int main() {

    cout << "Enter Core student info: " << endl;
    Core c1(cin);
    cout << "If met requirement? " << c1.met_require() << endl;

    cout << "Enter Grad student info: " << endl;
    Grad g1(cin);
    cout << "If met requirement? " << g1.met_require() << endl;
    return 0;
}