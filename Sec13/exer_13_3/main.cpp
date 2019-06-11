#include <iostream>
#include "Core.h"

using namespace std;

int main() {
    cout << "Enter Grad student info: " << endl;
    Grad grad(cin);

    if (grad.valid())
        cout << "Grade is " << grad.grade() << endl;
    return 0;
}