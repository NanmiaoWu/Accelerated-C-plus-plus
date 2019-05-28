//
// Created by nanmiao on 5/27/19.
//

#ifndef EXER_11_8_LIST_H
#define EXER_11_8_LIST_H

#include <cstddef>
#include <memory>

template <class T> class list{
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T value_type;
    typedef std::ptrdiff_t difference_type;
    typedef T& reference;
    typedef const T& const_reference;

    list(){resize(0);}
    list(const list& other){clone(other.data, other.avail);}
    list(const_iterator b, const_iterator e) {clone(b, e);}
    list& operator=(const list&);
    ~list(){destroy();}

    const_iterator begin() const {return data;}
    const_iterator end() const {return avail;}

private:
    iterator data;
    iterator avail;

    std::allocator<T> alloc;

    void clone(const_iterator, const_iterator);
    void resize(size_type);
    void destroy();
};

template <class T> list<T>& list<T>::operator=(const list& rhs){
    if(&rhs != this){
        destroy();
        clone(rhs.begin(), rhs.end());
    }
    return *this;
}

template <class T> void list<T>::resize(size_type n){
    data = alloc.allocate(n);
    avail = data + n;
}

template <class T> void list<T>::clone(const_iterator b, const_iterator e){
    data = alloc.allocate(e - b);
    avail = std::uninitialized_copy(b, e, data);
}

template <class T> void list<T>::destroy() {
    if (data){
       for(iterator it = data; it != avail; ++it)
           alloc.destroy(it);
       alloc.deallocate(data, avail - data);
    }
    data = avail = 0;
}
#endif //EXER_11_8_LIST_H
