#include <iostream>
#include <vector>
#include <string>
#include "gen_sentence.h"
#include "read_grammar.h"
#include "nrand.h"

using namespace std;

int main() {
    srand(time(NULL));
    // generate the sentence
    vector<string> sentence = gen_sentence(read_grammar(cin));

    // write the first word, if any
    vector<string>::const_iterator it = sentence.begin();
    if(!sentence.empty()){
        cout << *it;
        ++it;
    }

    // write the rest of words, each preceded by a space
    while(it != sentence.end()){
        cout << " " << *it;
        ++it;
    }
    cout << endl;

    return 0;
}