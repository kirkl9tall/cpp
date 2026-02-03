#pragma once
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
public:
    Intern();
    Intern(const Intern& other);
    Intern&operator=(const Intern& other);
    AForm* makeForm(std::string formName,std::string formTarget);
    AForm*shrub(std::string target);
    AForm*robot(std::string target);
    AForm*presid(std::string target);

    ~Intern();
};