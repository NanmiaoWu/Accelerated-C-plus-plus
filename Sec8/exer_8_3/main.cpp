#include <iostream>
#include <vector>
#include "template.h"

using namespace std;

int main() {
   vector<double> test = {1.0, 2.0, 9.0, 4.2};
   cout << "the median is: " << median(test.begin(), test.end());
   return 0;
}