#include "phonebook.hpp"
#include <string>

int main ()
{

    PhoneBook a;
    while (true)
    {
        std::string command;
        std::cout << "enter : ADD or SEARCH or EXIT" << std::endl;
        std::getline(std::cin,command);

        if (command == "ADD")
        {
            a.getFillContact(); 
            // a.printer()
            a.set_index_increment();
            
        }else if (command == "SEARCH")
        {
            // while ()
            // {
                a.printer();
            // }
        }
        else if (command == "EXIT")
        {
            std::cout << "GOOD BYE ! " << std::endl;
            break;
        }
    }
        // a.getFillContact();
}