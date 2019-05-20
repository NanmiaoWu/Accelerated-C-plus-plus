#include <iostream>
#include <vector>
#include <string>
#include "is_AscenOrDecen.h"
#include "extract_AscenOrDecen.h"
#include "find_longestNon.h"

using namespace std;

int main() {
    cout << "Enter the word: " << endl;
    string record;
    vector<string> words;

    // read and store words
    while(cin >> record){
        words.push_back(record);
    }

    // search and store words that has ascenders or descenders
    vector<string> words_AsenOrDecen = extract_AscenOrDecen(words);

    cout << "The words that has ascenders or descenders are: " << endl;
    for(vector<string>::size_type i = 0; i != words_AsenOrDecen.size(); ++i){
        cout << words_AsenOrDecen[i] << endl;
    }

    // find the longest non ascenders or descenders word
    string longestNon = find_longestNon(words);
    cout << "The longest non ascenders or descenders word is: " << endl;
    cout << longestNon << endl;


    return 0;
}