#include "Serializer.hpp"


int main  ()
{

    Data* a = new Data;
    a->value = 15;


    uintptr_t x =  Serializer::serialize(a);
    std::cout << x << std::endl;
    std::cout << a->value << std::endl;
}