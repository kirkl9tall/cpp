#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "wrongAnimal";
    std::cout <<"wrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout <<"wrongAnimal destructor called" << std::endl;
};
void WrongAnimal::makesound()const{

    std::cout<< "make any wrong noise"<< std::endl;
}
std::string WrongAnimal::getType()const{
    return (type);
}