#pragma once 
#include <iostream>

class Animal{

    protected:
    std::string type;
    public:
    Animal();
    Animal(std::string typo);

    virtual void  makeSound() const;
    virtual std::string getType()const ;
    virtual ~Animal();
};
