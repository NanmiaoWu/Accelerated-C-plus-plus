//
// Created by Nanmiao Wu on 2019-04-24.
//

#ifndef EXER_7_0_2_XREF_H
#define EXER_7_0_2_XREF_H

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include "split.h"

std::map<std::string, std::vector<int> >
xref(std::istream &, std::vector<std::string> find_words(const std::string &) = split);
#endif //EXER_7_0_2_XREF_H
