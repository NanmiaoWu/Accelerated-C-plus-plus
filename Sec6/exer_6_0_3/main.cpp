#include <iostream>
#include "find_urls.h"
#include <string>

using namespace std;

int main() {
    string s = "orange http://www.nan.com apple";
    vector<string> urls = find_urls(s);
    for(vector<string>::size_type i = 0; i != urls.size(); ++i){
        cout << urls[i];
    }
    return 0;
}