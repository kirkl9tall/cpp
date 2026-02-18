#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
private:
    T *arr;
    unsigned int _size; 

public:
    Array(): arr(NULL) , _size(0){}//  initialize the array  with the null 
    Array(unsigned int n):_size(n)
    {
        // create an array of  n _size  type T
        arr = new T[n];
    }
    Array(const Array &other)
    {
        this->_size = other._size;
        this->arr = new T[_size];
        for (unsigned int i = 0; _size > i; i++)
            this->arr[i] = other.arr[i];
        // creating the array  with the _size and then we will  make sure to copy with a for loop all the content ;
    }

    Array &operator=(const Array &other)
    {
        // the same thing  with the copy constructor but  we have to delete the previous  array  reallocate  then copy the content 
        if (this != &other)
        {
            delete[] this->arr;

            this->_size = other._size;
            this->arr = new T[_size];

            for (unsigned int i = 0; _size > i; i++)
                this->arr[i] = other.arr[i];
        }
        return *this;
    }

    T& operator[](unsigned int index){
        if(index>= _size)
            throw std::out_of_range("index out of bounds !");
        return arr[index];
    }
    const T& operator[](unsigned int index)const {
        if(index    >= _size)
            throw std::out_of_range("index out of bounds !");
        return arr[index];
    }
    unsigned int size() const{return _size;}
    ~Array(){
        delete[] arr;
    }
};
