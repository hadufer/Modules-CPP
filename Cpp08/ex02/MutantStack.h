#pragma once
#include <stack>
#include <deque>
#include <stdint.h>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator       iterator;
        MutantStack() {};
        MutantStack(const MutantStack &m) {(void *)m = m; return *this;};
        MutantStack &operator =(const MutantStack &m) {(void *)m = m; return *this;};
        virtual ~MutantStack() {};
        iterator begin() { return this->c.begin();}
        iterator end() { return this->c.end();}
};
