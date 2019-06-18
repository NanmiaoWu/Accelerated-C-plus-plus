#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ios>
#include <iomanip>

#include "Ptr.h"
#include "Core.h"

using namespace std;


bool compare_Core_Ptrs(const Ptr<Core> c1, Ptr<Core> c2){
    return compare(*c1, *c2);
}

int main() {
    vector< Ptr<Core> > students;
    Ptr<Core> record;
    char ch;
    string::size_type maxlen = 0;

    while(cin >> ch){
        if (ch == 'U')
            record = new Core;
        else
            record = new Grad;
        record->read(cin);
        maxlen = max (maxlen, record->name().size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare_Core_Ptrs);

    for(vector< Ptr<Core> >::size_type i = 0;
        i != students.size(); ++i){
        cout << students[i]->name()
             << string(maxlen + 1 - students[i]->name().size(), ' ');
        try{
            double final_grade = students[i]->grade();
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec) << endl;
        } catch (domain_error e){
            cout << e.what() << endl;
        }
    }
    return 0;
}