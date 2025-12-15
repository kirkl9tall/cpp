#pragma once 

#include <iostream>

class WrongAnimal {

protected:
    std::string type;
public:
    WrongAnimal();
    void makesound()const;
    std::string getType()const;
    ~WrongAnimal();
};