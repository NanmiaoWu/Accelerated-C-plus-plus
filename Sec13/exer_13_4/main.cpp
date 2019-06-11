#include <iostream>
#include "Core.h"

using namespace std;

int main() {
    cout << "Enter Core student info: " << endl;
    Core c1(cin);
    string final_letter = letter_grade(c1.grade());
    cout << "Grade is " << final_letter << endl;

    cout << "Enter Grad student info: " << endl;
    Core g1(cin);
    string final_letter_g = letter_grade(g1.grade());
    cout << "Grade is " << final_letter_g << endl;

    return 0;
}