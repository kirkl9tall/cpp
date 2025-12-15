#include "Cat.hpp"
#include "poly.hpp"


    Cat::Cat(){
        std::cout << "Cat constructor called "<< std::endl;
        this->type = "Cat";
    }
    Cat::~Cat(){
        std::cout << "Cat destructor called "<< std::endl;
    }

    void Cat::makeSound()const {
        std::cout << "Meeeeooow!"<<std::endl;
    }