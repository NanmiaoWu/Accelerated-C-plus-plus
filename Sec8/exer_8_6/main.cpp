#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <utility>
#include <algorithm>

using namespace std;

template <class T>
void my_print(T& t){
    for(typename T::const_iterator i = t.begin(); i != t.end(); ++i){
        cout << i->first <<' ' << i->second << endl;
    }
}

int main() {
    map<int, string> m = {{1, "apple"}, {200,"orange"}, {3, "watermelon"}};
    typedef pair<int, string> element;
    vector<element> x;
    list<element> y;
    copy(m.begin(), m.end(), back_inserter(x));
    copy(m.begin(), m.end(), back_inserter(y));
    my_print(x);
    my_print(y);

    vector<element> n = {{20, "Alice"}, {30, "Dannel"}};
    copy(n.begin(), n.end(), inserter(m, m.end()));
    my_print(m);
    return 0;
}