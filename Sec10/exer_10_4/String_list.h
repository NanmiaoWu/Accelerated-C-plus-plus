//
// Created by Nanmiao Wu on 2019-05-09.
//

#ifndef EXER_10_4_STRING_LIST_H
#define EXER_10_4_STRING_LIST_H

#include <string>
#include <list>
#include "node.h"

class String_list{
private:
    struct node *head;
    struct node *tail;

public:
    String_list();
    void create_list(std::string);
    void list_display();
    void insert_beg(std::string);
    void insert_end(std::string);
    void insert_middle(std::string, std::string);
    void delete_begin();
    void delete_end();
    void delete_middle(std::string);


};

#endif //EXER_10_4_STRING_LIST_H
