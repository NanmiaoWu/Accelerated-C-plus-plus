#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "xref.h"

using namespace std;


int main() {
    map<string, vector<int> > ret = xref(cin);

    // write the result
    for(map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it){
        // write the word
        cout << it->first << " occurs on the ";

        vector<int>::size_type number = it->second.size();
        if(number == 1)
            cout << "line: ";
        else
            cout << "lines: ";

        // followed by one or more line numbers
        vector<int>::const_iterator line_it = it->second.begin();
        cout << *line_it;  // write the first line number

        ++line_it;

        // write the rest line numbers
        while(line_it != it->second.end()){
            cout << ", " << *line_it;
            ++line_it;
        }

        cout << endl;
    }
    return 0;
}
