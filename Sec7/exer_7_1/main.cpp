#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    map<string, int> counters;
    map<int, vector<string> > wordFreq;

    while(cin >> s)
        ++counters[s];

    for(map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it){
        cout << it->first << "\t" << it->second << endl;
        wordFreq[it->second].push_back(it->first);
    }

    for(map<int, vector<string> >::const_iterator it_freq = wordFreq.begin(); it_freq != wordFreq.end(); ++it_freq){
        cout << "Frequency: "<< it_freq->first <<": " << endl;
        for(vector<string>::const_iterator it_word = it_freq->second.begin(); it_word != it_freq->second.end(); ++it_word){
            cout << *it_word << endl;
        }
    }
    return 0;
}
