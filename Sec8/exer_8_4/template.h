//
// Created by Nanmiao Wu on 2019-05-02.
//

#ifndef EXER_8_4_TEMPLATE_H
#define EXER_8_4_TEMPLATE_H

template <class T>
void my_swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}


#endif //EXER_8_4_TEMPLATE_H
