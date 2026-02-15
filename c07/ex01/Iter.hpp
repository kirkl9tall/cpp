#pragma once
#include  <iostream>


template <typename T>
void funptr(const T element)
{
    std::cout << element <<std::endl;
}


template<typename T,typename R>
void Iter(T*adrss , const int length, R funptr){

    for (int x = 0; x < length ;x++)
        funptr(adress[x]);
}



