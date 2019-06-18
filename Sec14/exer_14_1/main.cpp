#include <iostream>
#include <sstream>
#include "Student_info.h"
#include "Ptr.h"
#include "Core.h"

using namespace std;

bool compare_Core_handles(const Ptr<Core>& lhs, const Ptr<Core>& rhs) {
    return compare(*lhs, *rhs);
}

int main() {
    stringstream s1("Dannel 10 20 30 40");
    stringstream s2("Yolas 80 90 100 100");

    Ptr<Core> p1 = new Core(s1);
    Ptr<Core> p2 = new Core(s2);

    cout << "Comparison: " << p1->name() << " VS " << p2->name() << endl;
    cout << (compare_Core_handles(p1, p2)) << endl;

    return 0;
}