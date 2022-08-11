#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <deque>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        MutantStack() : std::stack<T, Container>() {};
        MutantStack(const MutantStack& object) : std::stack<T, Container>(object) {this->c = object.c;}
        MutantStack& operator=(const MutantStack& object) {
            this->c = object.c;
            return *this;
        }
        ~MutantStack() {};
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
};

#endif