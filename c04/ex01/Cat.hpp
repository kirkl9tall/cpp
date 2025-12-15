#pragma once

#include  "poly.hpp"
#include "Brain.hpp"

class  Cat: public Animal {
    Brain* brain;
    public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound()const ;
    ~Cat();
};