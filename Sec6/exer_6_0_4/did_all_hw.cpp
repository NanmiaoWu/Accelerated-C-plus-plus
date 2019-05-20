//
// Created by Nanmiao Wu on 2019-04-16.
//

#include "did_all_hw.h"
#include "Student_info.h"
#include <algorithm>

bool did_all_hw(const Student_info & s) {
    return (find(s.homework.begin(), s.homework.end(), 0 ) == s.homework.end());
    return false;
}
