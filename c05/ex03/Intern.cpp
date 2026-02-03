#include "Intern.hpp"


Intern::Intern(){

}

Intern::Intern(const Intern& other){
    (void)other;
}
Intern& Intern::operator=(const Intern& other){
    (void)other;
    return *this;
}
Intern::~Intern(){

}

AForm* Intern::shrub(std::string target){
    return (new ShrubberyCreationForm(target));
}
AForm* Intern::robot(std::string target){
    return (new RobotomyRequestForm(target));
}
AForm* Intern::presid(std::string target){
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string formName,std::string formTarget){

    std::string names[] = {"shrubbery creation","robotomy request","presidential pardon"} ;

    AForm* (Intern::*ptr[3])(std::string formTarget) = {&Intern::shrub,&Intern::robot,&Intern::presid};
    int  i;
    for (i = 0 ; i < 3 ;i++ )
    {
        if (names[i] == formName)
        {
            std::cout << "Intern creates" << formName<<std::endl;
            return (this->*ptr[i])(formTarget);
        }
    }
    std::cout << "Form not found " << std::endl;
    return (NULL);
}