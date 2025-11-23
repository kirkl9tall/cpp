/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:02:42 by abismail          #+#    #+#             */
/*   Updated: 2025/11/22 15:02:43 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
class PhoneBook
{
    Contact contact[8];
    int index;
public:
    PhoneBook();
    int checker(std::string buffer);
    void getFillContact();
    void head();
    void printer();
    void set_index_increment();
    std::string formatedFeild(std::string s);
    int get_index();
};
#endif