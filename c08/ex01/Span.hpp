#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span{
    private:
    std::vector<int> container;
    unsigned int N;
    public:
    Span(unsigned int n);

    Span (const Span& other);
    Span& operator=(const Span& other);

    void addNumber (int  value);
    template <typename T>
    void addNumbers (T container){
        typename T::iterator it = container.begin();
        while (it != container.end())
        {
            addNumber(*it);
            ++it;
        }
    }
    int shortestSpan() const;
    int longestSpan() const;
    ~Span();
};