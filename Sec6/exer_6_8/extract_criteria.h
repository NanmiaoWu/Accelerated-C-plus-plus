//
// Created by Nanmiao Wu on 2019-04-22.
//

#ifndef EXER_6_8_EXTRACT_CRITERIA_H
#define EXER_6_8_EXTRACT_CRITERIA_H

#include <vector>
#include "Student_info.h"

std::vector<Student_info> extract_criteria(std::vector<Student_info> &, bool criteria(const Student_info &));

#endif //EXER_6_8_EXTRACT_CRITERIA_H
