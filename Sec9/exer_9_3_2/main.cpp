#include <iostream>
#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

using namespace std;
int main() {
    //catch
    Student_info record;

    try{
        record.grade();
    }catch (domain_error e){
        cout << e.what();
    }
    return 0;
}
