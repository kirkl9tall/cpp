#include "Cat.hpp"
#include "poly.hpp"
#include "Brain.hpp"

    Cat::Cat(){
        std::cout << "Cat constructor called "<< std::endl;
        this->type = "Cat";
        brain = new Brain;
    }
    Cat::~Cat(){
        std::cout << "Cat destructor called "<< std::endl;
        delete brain;
    }

    void Cat::makeSound()const {
        std::cout << "Meeeeooow!"<<std::endl;
    }

    Cat::Cat(const Cat& other):Animal(other){
        std::cout << "Cat copy constructor called"<<std::endl;
        brain = new Brain(*(other.brain));
    }

    Cat& Cat::operator=(const Cat& other){
        if (this != &other){
            Animal::operator=(other);   
            delete brain;
            brain = new Brain(*(other.brain));
        }
            return *this;
    }