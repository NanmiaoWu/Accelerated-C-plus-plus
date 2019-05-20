//
// Created by Nanmiao Wu on 2019-04-30.
//
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

// definition
template <class T> T median(std::vector<T> v){
    typedef typename vector<T>::size_type vec_sz;
    vec_sz size = v.size();
    if (size == 0)
        throw domain_error("median of an empty vector");

    sort(v.begin(), v.end());

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (v[mid] + v[mid - 1])/ 2 : v[mid];
}

template <class In, class X> In find(In begin, In end, const X& x){
    while(begin != end && *begin != x)
        ++begin;
    return begin;
}