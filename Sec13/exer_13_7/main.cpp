#include <iostream>
#include "Core.h"

using namespace std;

int main() {
    cout << "Enter a audit student info: " << endl;
    Audit a(cin);
    cout << "Grade is: " << a.grade() << endl;
    return 0;
}