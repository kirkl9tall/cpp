#pragma once
#include  <iostream>


template <typename T>
void funptr(const T element)
{
    std::cout << element <<std::endl;
}


template<typename T>
void Iter(T* array , const int length, void (*f)(T)){

    for (int x = 0; x < length ;x++)
        f(array[x]);
}



