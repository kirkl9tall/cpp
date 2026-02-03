#include "Bureaucrat.hpp"
#include  "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



#include <iostream>

int main()
{

Bureaucrat a ("abdelilah",1);
Intern so;
AForm* rrf;
rrf = so.makeForm("robotomy request", "Bender");
rrf->beSigned(a);

a.executeForm(*rrf);

delete rrf;
}
