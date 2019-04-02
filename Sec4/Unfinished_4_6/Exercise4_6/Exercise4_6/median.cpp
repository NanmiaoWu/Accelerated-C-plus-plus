//
//  median.cpp
//  Exercise4_6
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#include "median.hpp"
#include <vector>
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::domain_error;
using std::sort;

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    
    if (size == 0){
        throw domain_error("median of an empty vector");
    }
    
    sort(vec.begin(),vec.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (vec[mid]+vec[mid-1])/2 : vec[mid];
}
