//
// Created by nanmiao on 6/18/19.
//

#ifndef EXER_14_0_2_PTR_H
#define EXER_14_0_2_PTR_H

#include <cstddef>
#include <stdexcept>

template <class T> class Ptr{
public:
    void make_unique(){
        if (*refptr != 1){
            --*refptr;
            refptr = new size_t(1);
            p = p ? clone(p) : 0;
        }
    }

    Ptr(): p(0), refptr(new std::size_t(1)) { }
    Ptr(T* t): p(t), refptr(new std::size_t(1)) { }
    Ptr(const Ptr& h): p(h.p), refptr(h.refptr) { ++*refptr;}

    Ptr& operator=(const Ptr&);
    ~Ptr();
    operator bool() const {return p;}
    T& operator*() const {
        if (p)
            return *p;
        throw std::runtime_error("unbound Ptr");
    }
    T* operator->() const{
        if (p)
            return p;
        throw std::runtime_error("unbound Ptr");
    }

private:
    T* p;
    std::size_t* refptr;

};

template <class T>
Ptr<T>& Ptr<T>::operator=(const Ptr& rhs) {
    ++*rhs.refptr;
    if (--*refptr == 0){
        delete refptr;
        delete p;
    }

    refptr = rhs.refptr;
    p = rhs.p;
    return *this;
}

template <class T> Ptr<T>:: ~Ptr(){
    if (--*refptr == 0){
        delete refptr;
        delete p;
    }
}

template<class T> T* clone(const T* tp)
{
    return tp->clone();
}
#endif //EXER_14_0_2_PTR_H
