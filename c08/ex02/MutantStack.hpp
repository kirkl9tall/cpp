#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <stack>

class MutantStack : public std::stack<int>
{
    public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack& other) : std::stack<int>(other) {};
    
    MutantStack& operator=(const MutantStack& other) {
        std::stack<int>::operator=(other);
        return *this;
    }
    typedef typename std::stack<int>::container_type::iterator iterator;
    iterator begin() { return std::stack<int>::c.begin(); }
    iterator end() { return std::stack<int>::c.end(); }
};