//
// Created by Nanmiao Wu on 2019-05-16.
//

#ifndef EXER_10_4_NODE_H
#define EXER_10_4_NODE_H

#include <string>

struct node{
    std::string info;
    struct node *prev;
    struct node *next;
};

#endif //EXER_10_4_NODE_H
