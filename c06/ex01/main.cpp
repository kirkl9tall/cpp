#include "Serializer.hpp"


int main  ()
{

    Data* a;
    a->value = 15;


    uintptr_t x =  Serializer::serialize(a);
}