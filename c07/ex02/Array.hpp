#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int size; 

public:
    Array(): arr(NULL) , size(0)
    {
    }
    Array(unsigned int n):size(n)
    {
        // create an array of  n size  type T
        arr = new T[n];
    }
    Array(Array &other)
    {
        this->arr = new T[size];
        for (unsigned int i = 0; size > i; i++)
            this->arr[i] = other.arr[i];
        this->size = other.size;
        // modifying either the original array or its copy after copying musn’t affect the other array.
    }
    Array &operator=(Array &other)
    {
        //
        if (this != &other)
        {
            delete[] this->arr;
            this->arr = new T[size];
            for (unsigned int i = 0; size > i; i++)
                this->arr[i] = other.arr[i];
            this->size = other.size;
        }
        return *this;
    }
    ~Array()
    {
        delete[] arr;
    }
};
