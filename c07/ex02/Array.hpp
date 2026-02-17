#pragma once

#include <iostream>

template <typename T>

class Array
{
private:
    T *arr;
    unsigned int size; 

public:
    Array(): arr(NULL) , size(0){}//  initialize the array  with the null 
    Array(unsigned int n):size(n)
    {
        // create an array of  n size  type T
        arr = new T[n];
    }
    Array(Array &other)
    {
        this->arr = new T[size];
        this->size = other.size;
        for (unsigned int i = 0; size > i; i++)
            this->arr[i] = other.arr[i];
        // creating the array  with the size and then we will  make sure to copy with a for loop all the content ;
    }
    Array &operator=(Array &other)
    {
        // the same thing  with the copy constructor but  we have to delete the previous  array  reallocate  then copy the content 
        if (this != &other)
        {
            delete[] this->arr;

            this->size = other.size;
            this->arr = new T[size];

            for (unsigned int i = 0; size > i; i++)
                this->arr[i] = other.arr[i];
        }
        return *this;
    }
    T& operator[](unsigned int index){
        if(arr[index]>= size)
            throw std::out_of_range("index out of bounds !");
        return arr[index];
    }
    const T& operator[](unsigned int index){
        if(arr[index]>= size)
            throw std::out_of_range("index out of bounds !");
        return arr[index];
    }
    unsigned int size() const{return size;}
    ~Array()
    {
        delete[] arr;
    }
};
