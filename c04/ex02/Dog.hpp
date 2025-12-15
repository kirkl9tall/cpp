#pragma once 

#include  "poly.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    Brain *brain;
    public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void  makeSound()const ;
    ~Dog();
};