#pragma once

#include <iostream>
#include <vector>


template<typename T>
class Span{
    private:
    std::vector<int> container;
    unsigned int N;
    public:
    Span(unsigned int n):N(n){};
    void addNumber (int  value){
        if (container.size() >= N)
            throw std::out_of_range("out of size !");
        container.push_back(value);
    }
    void shortestSpan() {
        
        
        // use algorithm distance() to find the  shortes distance
        // and throw the exeption if there is no distance  .
    }
    void longestSpan(){
        // use algorithm distance() to find the  longest  distance
        // and throw the exeption if there is no distance  
    }

};