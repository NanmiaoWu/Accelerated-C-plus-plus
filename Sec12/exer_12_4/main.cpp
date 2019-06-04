#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    Str t1 = "Blue orange";
    Str t2 = "Yellow apple";
    Str t3 = "Pink strawberry";

    cout << t1 << " is equal to " << t2 << " ? " << (t1 == t2) << endl;
    cout << t2 << " is not equal to " << t3 << " ? " << (t2 != t3) << endl;
    cout << t3 << " is equal to " << t3 << " ? " << (t3 == t3) << endl;
    return 0;
}