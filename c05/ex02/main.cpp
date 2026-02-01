#include "Bureaucrat.hpp"
#include  "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



#include <iostream>

int main()
{

    Bureaucrat a("abdelilah",142);
    ShrubberyCreationForm b ("fifa");
    a.signForm(b);
    // try {
    //     b.execute(a);
    // }
    // catch(std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;

    // }
    a.executeForm(b);


}
