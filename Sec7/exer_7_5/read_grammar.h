//
// Created by Nanmiao Wu on 2019-04-24.
//

#ifndef EXER_7_0_3_READ_GRAMMAR_H
#define EXER_7_0_3_READ_GRAMMAR_H

#include <iostream>
#include <vector>
#include <string>
#include <map>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream &);

#endif //EXER_7_0_3_READ_GRAMMAR_H
