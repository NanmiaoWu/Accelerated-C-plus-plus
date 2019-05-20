#include <iostream>
#include "is_palindrome.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> s = {"civic", "apple", "eye", "level", "orange"};
    vector<string> s_palindrome;
    vector<string>::const_iterator iter = s.begin();
    while(iter != s.end()){
        if(is_palindrome(*iter)){
            s_palindrome.push_back(*iter);
            ++iter;
        } else
            ++iter;
    }
    cout << "Palindrome words are: " << endl;
    for(vector<string>::size_type i = 0; i != s_palindrome.size(); ++i){
        cout << s_palindrome[i] << endl;
    }
    return 0;
}