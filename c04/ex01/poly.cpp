#include "poly.hpp"

    Animal::Animal(){
        std::cout  << "Animal constructor called !"<<std::endl;
    }

    Animal::~Animal(){
        std::cout  << "Animal destructor called !"<<std::endl;

    }
    Animal::Animal(std::string typo){
        std::cout  << "Animal constructor_2  called !"<<std::endl;
        type = typo;
    }

    std::string Animal::getType()const {
        return (type);
    }
    void  Animal::makeSound()const {
        std::cout << "any sound !" << std::endl;
    }

    Animal::Animal (const Animal& other){
        type = other.type;
    }

    Animal& Animal::operator=(const Animal& other){
        type = other.type;
        return *this;
    }