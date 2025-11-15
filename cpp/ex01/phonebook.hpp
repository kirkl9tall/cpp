#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
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
    void head()
    {
            std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "FirstName"
              << "|" << std::setw(10) << "LastName"
              << "|" << std::setw(10) << "NickName"
              << "|" << std::endl;
    }    void head_two()
    {
            std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "FirstName"
              << "|" << std::setw(10) << "LastName"
              << "|" << std::setw(10) << "NickName"
              << "|" << std::setw(10) << "PhoneNumber"
              << "|" << std::setw(10) << "D_secret" << std::endl;
    }
    void printer()
    {   
        int t = 0;
        int pick;
        head();
        while (t  < (index>8 ? 8: index))
        {
            std::cout <<"|" << std::setw(10) << t << "|" <<  std::setw(10) << formatedFeild(contact[t].getFirstName()) << "|"
            << std::setw(10) << formatedFeild(contact[t].getLastname() ) << "|" << std::setw(10) 
            << formatedFeild(contact[t].getNickname() ) << "|" << std::endl;      
            t++;
        }
        std::cout << "PICK INDEX : ";
        std::cin >> pick;
        if (pick < 8 && index > pick)
        {
            head_two();
            std::cout << "|" << std::setw(10) << pick << "|" << std::setw(10) << formatedFeild(contact[pick].getFirstName()) << "|"
            << std::setw(10) << formatedFeild(contact[pick].getLastname() ) << "|" << std::setw(10) 
            << formatedFeild(contact[pick].getNickname() ) << "|"  << std::setw(10) 
            << formatedFeild(contact[pick].getPhonenumber() ) << "|" << std::setw(10) 
            << formatedFeild(contact[pick].getDarkest_secret() ) << "|" << std::endl;
        }
        else 
        {
            std::cout << "Index ERROR" << std::endl;
        }
    };
    std::string formatedFeild(std::string s)
    {
        if (s.length() > 10)
            return s.substr(0,9) + "." ;
        return s;
    };
    void set_index_increment()
    {
        index++;
    };
    int get_index()
    {
        return(index);
    };
};
#endif