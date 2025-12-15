#include "Dog.hpp"
#include "poly.hpp"
#include "Brain.hpp"


    Dog::Dog(){
        std::cout << "Dog constructor called "<< std::endl;
        this->type = "Dog";
        brain = new Brain;
    }
    Dog::~Dog(){
        std::cout << "Dog destructor called "<< std::endl;
        delete brain;
    }

    void Dog::makeSound()const {
        std::cout << "rouuugh rouuugh !"<<std::endl;
    }

    Dog::Dog(const Dog& other):Animal(other){
        std::cout << "Dog copy constructor called"<<std::endl;
        brain = new Brain(*(other.brain));
    }

    Dog& Dog::operator=(const Dog& other){
        if (this != &other){
            Animal::operator=(other);
            delete brain;
            this->brain = new Brain(*(other.brain));
        }
    return *this;
    }