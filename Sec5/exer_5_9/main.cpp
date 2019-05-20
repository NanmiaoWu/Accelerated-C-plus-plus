#include <iostream>
#include <string>
#include <vector>
#include "extract_allLower.h"

using namespace std;

int main() {
    cout << "Enter the words: " << endl;
    string record;
    vector<string> words;

    // store input
    while(cin >> record){
        words.push_back(record);
    }

    vector<string> words_allLower = extract_allLower(words);

    for(vector<string>::size_type i = 0; i != words_allLower.size(); ++i){
        cout << words_allLower[i] << endl;
    }

    for(vector<string>::size_type i = 0; i != words.size(); ++i){
        cout << words[i] << endl;
    }

    return 0;
}