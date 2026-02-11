#pragma once
#include <iostream>
#include  <string>
#include <climits>
#include <iomanip>
#include <stdint.h>
#include "Data.hpp"

class Serializer{
public:
    Serializer();
    Serializer(Serializer& other);
    Serializer&operator=(Serializer& other);
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};