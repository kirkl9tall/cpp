/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lpech.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:02:46 by abismail          #+#    #+#             */
/*   Updated: 2025/11/22 15:02:47 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
}
