#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Alice", 1);
        std::cout << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("Bob", 150);
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("Charlie", 0); 
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat d("David", 151);
        std::cout << d << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
