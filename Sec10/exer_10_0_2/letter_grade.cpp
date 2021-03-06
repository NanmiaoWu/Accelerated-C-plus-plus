//
// Created by Nanmiao Wu on 2019-05-08.
//

#include "letter_grade.h"
#include <string>
#include <cstddef>

using namespace std;

string letter_grade(double grade) {
    static const double numbers[] = {97, 94, 90, 87, 84, 80, 77, 74, 70, 60, 0};

    static const char* const letters[] = {"A+", "A", "A-", "B+","B", "B-",
                                          "C+", "C", "C-", "D", "F"};

    static const size_t ngrade = sizeof(numbers) / sizeof(*numbers);

    for(size_t i = 0; i < ngrade; ++i){
        if (grade >= numbers[i]){
            return letters[i];
        }
    }
    return "?\?\?";
}
