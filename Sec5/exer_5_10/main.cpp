#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "find_palin.h"
#include "longest_palin.h"

using namespace std;

int main() {
    cout << "Enter the words: " << endl;
    string record;
    vector<string> words;
    while(cin >> record){
        words.push_back(record);
    }

    vector<string> words_palin;

    words_palin = find_palin(words);

    cout << "Palindromes words: " << endl;
    for(vector<string>::size_type i = 0; i != words_palin.size(); ++i){
        cout << words_palin[i] << endl;
    }

    cout << "The longest palindromes word is: " << longest_palin(words_palin) << endl;

    return 0;
}