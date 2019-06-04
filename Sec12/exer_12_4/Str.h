//
// Created by nanmiao on 5/31/19.
//

#ifndef EXER_12_1_STR_H
#define EXER_12_1_STR_H

#include <cstring>
#include <memory>
#include "Vec.h"
#include <iterator>

class Str{
    // input operator
    friend std::istream& operator>>(std::istream&, Str&);

public:

    typedef Vec<char>::size_type size_type;
    typedef char* iterator;
    typedef const char* const_iterator;

    Str() {create(0, '\0');}
    Str(size_type n, char c) {create(n, c);}
    Str(const Str& s) {create(s.begin(), s.end());}
    Str(const char* cp){create(cp, cp + std::strlen(cp));}

    Str& operator=(const Str&);
    ~Str(){uncreate();}

    char& operator[](size_type i) {return chars[i];}
    const char& operator[](size_type i) const {return chars[i];}

    size_type size() const {return length - 1;}

    iterator begin() {return chars;}
    iterator end() { return chars + length - 1; }

    const_iterator begin() const {return chars;}
    const_iterator end() const {return chars + length - 1;}

    // three member functions for getting a char array from a string
    const char* c_str() const {return chars;}
    const char* data() const {return chars;}
    size_type copy(iterator, size_type, size_type = 0) const;

    Str& operator+=(const Str& s);




private:
    iterator chars;
    // the length contains the last null-terminator \0
    size_type length;

    std::allocator<char> alloc;

    void create(size_type, char);
    template <class In> void create(In, In);

    void uncreate();
    void grow(size_type);

};

// other functions
std::ostream& operator<<(std::ostream&, const Str&);

Str operator+(const Str&, const Str&);

// rational operators
inline bool operator<(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) < 0);
}

inline bool operator<=(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) <= 0);
}

inline bool operator>(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) > 0);
}

inline bool operator>=(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) >= 0);
}

inline bool operator==(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) == 0);
}

inline bool operator!=(const Str& lhs, const Str& rhs){
    return (std::strcmp(lhs.c_str(), rhs.c_str()) != 0);
}

#endif //EXER_12_1_STR_H
