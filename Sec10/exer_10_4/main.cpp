#include <iostream>
#include "String_list.h"

using namespace std;

int main() {
    String_list Str_list;
    Str_list.create_list("apple");
    Str_list.insert_end("is good");
    Str_list.insert_beg("Eating an");
    Str_list.insert_middle("apple", "sweet");
    Str_list.insert_middle("is good", "every day");
    cout << "Complete result is: " << endl;
    Str_list.list_display();

    Str_list.delete_begin();
    cout << "After deleting beginning, result is: " << endl;
    Str_list.list_display();

    Str_list.delete_end();
    cout << "After deleting end, result is: " << endl;
    Str_list.list_display();

    Str_list.delete_middle("every day");
    cout << "After deleting middle, result is: " << endl;
    Str_list.list_display();
    
    return 0;
}