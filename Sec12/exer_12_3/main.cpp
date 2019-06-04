#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    Str t1 = "apple";
    Str t2 = "Abnormal";
    Str t3 = "abnormal";
    Str t4 = "abnormal bears";

    cout << t1 << " is smaller than " << t2 << " ? " << (t1 < t2) << endl;
    cout << t2 << " is smaller or equal to " << t3 << " ? " << (t2 <= t3) << endl;
    cout << t1 << " is larger or equal to " << t4 << " ? " << (t1 >= t4) << endl;
    cout << t4 << " is larger than " << t4 << " ? " << (t4 > t4) << endl;

    return 0;
}