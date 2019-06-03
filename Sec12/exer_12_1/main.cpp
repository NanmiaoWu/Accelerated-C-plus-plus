#include <iostream>
#include "Str.h"

using namespace std;

int main() {
    // Default constructors
    cout << Str() << endl;

    // Create a Str containing n copies;
    cout << Str(3, 'N') << endl;

    return 0;
}