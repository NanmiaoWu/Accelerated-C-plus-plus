//
// Created by Nanmiao Wu on 2019-04-30.
//

#include <string>
#include "not_space.h"
#include "space.h"

template <class Out> void split(const std::string& str, Out os){
    typedef std::string::const_iterator iter;
    iter i = str.begin();
    while(i != str.end()){
        i = find_if(i, str.end(), not_space);

        iter j = find_if(i, str.end(), space);

        if(i != str.end())
            *os++ = std::string(i, j);

        i = j;
    }
}
