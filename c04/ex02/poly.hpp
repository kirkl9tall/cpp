#pragma once 
#include <iostream>

class Animal{

    protected:
    std::string type;
    public:
    Animal();
    Animal(std::string typo);
    Animal (const Animal& other);
    Animal& operator=(const Animal& other);

    virtual void  makeSound() const = 0;
    virtual std::string getType()const;
    virtual ~Animal();
};