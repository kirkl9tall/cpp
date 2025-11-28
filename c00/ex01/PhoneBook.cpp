/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:02:39 by abismail          #+#    #+#             */
/*   Updated: 2025/11/22 15:02:40 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(){
    index = 0;
}
int PhoneBook::checker(std::string buffer)
{
        int i = 0;
        while (buffer[i])
        {
            if (!((buffer[i] >= 65 && buffer[i] <= 90) || (buffer[i] >= 97 && buffer[i] <= 122)))
                return 0;
            i++;
        }
        return 1;
}
void PhoneBook::getFillContact()
{
    std::string buffer;
    std::cout << "First Name :" << std::endl;
    if (!getline(std::cin, buffer))
    {
        std::cout << "EOF detected, exiting..." << std::endl;
        exit(1);
    }
    if (checker(buffer))
        contact[index % 8].set_FirstName(buffer);
    std::cout << "Last name :" << std::endl;
    if (!getline(std::cin, buffer))
    {
        std::cout << "EOF detected, exiting..." << std::endl;
        exit(1);
    }
    if (checker(buffer))
        contact[index % 8].setLastname(buffer);
    std::cout << "nickName :" << std::endl;
    if (!getline(std::cin, buffer))
    {
        std::cout << "EOF detected, exiting..." << std::endl;
        exit(1);
    }
    if (checker(buffer))
        contact[index % 8].setNickname(buffer);
    std::string number;
    while (true)
    {
        std::cout << "PhoneNumber :" << std::endl;
        if (!getline(std::cin, number))
        {
            std::cout << "EOF detected, exiting..." << std::endl;
            exit(1);
        }
        contact[index % 8].setPhonenumber(number);
        break;
    }
    std::cout << "darkerst secret :" << std::endl;
    if (!getline(std::cin, buffer))
    {
        std::cout << "EOF detected, exiting..." << std::endl;
        exit(1);
    }
    std::cout << "index :" << index <<  std::endl;
    contact[index % 8].setDarkest_secret(buffer);
}
void PhoneBook::head()
{
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "FirstName"
              << "|" << std::setw(10) << "LastName"
              << "|" << std::setw(10) << "NickName"
              << "|" << std::endl;
}
void PhoneBook::printer()
{
    int t = 0;
    int pick;
    head();
    while (t < (index > 8 ? 8 : index))
    {
        std::cout << "|" << std::setw(10) << t << "|" << std::setw(10) << formatedFeild(contact[t].getFirstName()) << "|"
                  << std::setw(10) << formatedFeild(contact[t].getLastname()) << "|" << std::setw(10)
                  << formatedFeild(contact[t].getNickname()) << "|" << std::endl;
        t++;
    }
    std::cout << "PICK INDEX : ";
    std::cin >> pick;
    std::cin.ignore();
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    else if (pick < 8 && index > pick)
    {
        std::cout << "index : " << pick << "\n"
                  << "First Name : " << formatedFeild(contact[pick].getFirstName()) << ".\n"
                  << "Last Name : " << formatedFeild(contact[pick].getLastname()) << ".\n"
                  << "Nickname : "
                  << formatedFeild(contact[pick].getNickname()) << ".\n"
                  << "Phone Number : "
                  << formatedFeild(contact[pick].getPhonenumber()) << ".\n"
                  << "Darkest_secret : "
                  << formatedFeild(contact[pick].getDarkest_secret()) << std::endl;
    }
    else
    {
        std::cout << "Index ERROR" << std::endl;
    }
}
std::string PhoneBook::formatedFeild(std::string s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}
void PhoneBook::set_index_increment()
{
    index++;
}
int PhoneBook::get_index()
{
    return (index);
}