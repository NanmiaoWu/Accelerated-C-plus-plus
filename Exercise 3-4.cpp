
// 3-4

#include <iostream>
#include <string>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::sort;

int main()
{
    cout<<"Please enter strings, "
    <<"followed by end-of-file:"<<endl;
    
    
    vector<string> words;
    string x;
    while(cin>>x){
        words.push_back(x);
    }
    typedef vector<string>::size_type vc_sz;
    vc_sz size=words.size();
    
    if(size==0){
        cout<<"Please enter words. "
        <<"Please try again."<<endl;
        return 1;
    }
    
    sort(words.begin(), words.end());
    
    x=words[0];
    string::size_type short_str, long_str;
    short_str=x.length();
    long_str=x.length();
    
    // invariant: the shortest string length is short_str
    // the longest string length is long_str
    
    for(int i=1; i<size;++i){
        string s=words[i];
        if(s.length()<short_str){
            short_str=s.length();
        }
        else if(s.length()>long_str){
            long_str=s.length();
        }
    }
    cout<<"Longest length is: "<<long_str<<endl;
    cout<<"Shortest length is: "<<short_str<<endl;
    return 0;
}


