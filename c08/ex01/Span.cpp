#include "Span.hpp"

void Span::addNumber (int  value){
    if (container.size() >= N)
        throw std::logic_error("out of size !");
    container.push_back(value);
}


int Span::shortestSpan() const{
    if (container.size() < 2)
        throw std::logic_error("Not enough elements to compute span");
    std::vector<int> tmp = container;

    std::sort(tmp.begin(),tmp.end());

    int min_span = tmp[1] - tmp[0];

    for (size_t i = 1; i < tmp.size() -1 ;i++ )
    {
        int diff = tmp[i+1] - tmp[i];
        if (min_span > diff)
            min_span = diff; 
    }
    return min_span;
}

int Span::longestSpan() const{
    if (container.size() < 2)
        throw std::logic_error("Not enough elements to compute span");

    int minVal = *std::min_element(container.begin(),container.end());
    int maxVal = *std::max_element(container.begin(),container.end());
    
    return  maxVal - minVal;
}

Span::Span(unsigned int n):N(n){}

Span::Span (const Span& other): container(other.container) ,N(other.N){}

Span& Span::operator=(const Span& other){
    N = other.N;
    container = other.container;
    return *this; 
}