#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default constructor called" << std::endl;
}
Brain::Brain(const Brain& other){
    std::cout << "copy  Brain constructor called"<<std::endl;
    for (int i = 0;i < 100; i++ )
        idea[i] = other.idea[i];
}

Brain& Brain::operator=(const Brain& other){
    std::cout << " copy assignement operator called "<< std::endl;
        for (int i = 0;i < 100; i++ )
            idea[i] = other.idea[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called"<< std::endl;
}