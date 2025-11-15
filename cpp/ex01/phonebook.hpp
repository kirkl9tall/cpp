#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
class PhoneBook{
    Contact contact[8];
    int index;
    public:
    PhoneBook()
    {
        index = 0;
    }
    void getFillContact()
    {
        std::string buffer;
        std::cout << "First Name :"<< std::endl;
        getline(std::cin,buffer);
        contact[index % 8].set_FirstName(buffer);
        std::cout << "Last name :"<< std::endl;
        getline(std::cin,buffer);
        contact[index % 8].setLastname(buffer);
        std::cout << "nickName :"<< std::endl;
        getline(std::cin,buffer);
        contact[index % 8].setNickname(buffer);
        std::cout << "PhoneNumber :"<< std::endl;
        getline(std::cin,buffer);
        contact[index % 8].setPhonenumber(buffer);
        std::cout << "darkerst secret :"<< std::endl;
        getline(std::cin,buffer);
        contact[index % 8].setDarkest_secret(buffer);
    };
    void printer()
    {   int t = 0 ;
        while (t  < (index>8?8:index))
        {

            std::cout << contact[t].getFirstName() << "   |  ";
            std::cout << contact[t].getLastname() << "   |  ";
            std::cout << contact[t].getNickname() << "   |  ";
            std::cout << contact[t].getPhonenumber() << "   |  ";
            std::cout << contact[t].getDarkest_secret() << "   |  ";
            std::cout << std::endl;      
            t++;
        }
    };
    void set_index_increment()
    {
        index++;
    }
    int get_index()
    {
        return(index);
    }
};
#endif