#include "phonebook.hpp"
#include <string>
#include <iostream>
int main ()
{

    PhoneBook a;
    while (true)
    {
        std::string command;
        std::cout << "enter : ADD or SEARCH or EXIT" << std::endl;
        if (!std::getline(std::cin, command))
        {
            std::cout << "EOF detected, exiting..." << std::endl;
            break;
        }
        if (command == "ADD")
        {
            a.getFillContact(); 
            a.set_index_increment();
            
        }else if (command == "SEARCH")
        {
                a.printer();
        }
        else if (command == "EXIT")
        {
            std::cout << "GOOD BYE ! " << std::endl;
            break;
        }

    }
        // a.getFillContact();
}


// #include <chrono>
// #include <thread>

// int main ()
// {
//     std::cout << "hello world" << "\n";
//     std::this_thread::sleep_for(std::chrono::seconds(5));
//     std::cout << "how are  you";
// }
