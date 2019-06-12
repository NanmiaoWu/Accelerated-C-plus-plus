#include <iostream>
#include "Core.h"

using namespace std;

int main() {
    cout << "Enter a student info: " << endl;
    Fail_Pass f1(cin);
    cout << "Grade is: " << f1.grade() << endl;
    cout << "Whether pass or fail: " << f1.passed() << endl;
    return 0;
}