//
//  Student_info.hpp
//  Exercise4_6
//
//  Created by Nanmiao Wu on 3/29/19.
//  Copyright © 2019 Nanmiao Wu. All rights reserved.
//

#ifndef Student_info_hpp
#define Student_info_hpp

//#include <stdio.h>
#include <string>
#include <iostream>

struct Student_info{
    std::string name;
    double grade;
};

bool compare(const Student_info&, const Student_info&);

#endif /* Student_info_hpp */
