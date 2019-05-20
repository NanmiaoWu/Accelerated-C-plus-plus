#include <iostream>
#include <vector>
#include <string>
#include "width.h"
#include "frame.h"

using namespace std;

int main() {
    vector<string> v;
    vector<string> v_frame = frame(v);
    for(vector<string>::size_type i = 0; i != v_frame.size(); ++i){
        cout << v_frame[i] << endl;
    }
    return 0;
}