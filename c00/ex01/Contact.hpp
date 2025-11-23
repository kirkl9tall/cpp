/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:02:49 by abismail          #+#    #+#             */
/*   Updated: 2025/11/22 15:02:50 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darckestSecret;
    public:
    void set_FirstName (std::string content);
    void setLastname (std::string content);
    void setNickname (std::string content);
    void setPhonenumber (std::string content);
    void setDarkest_secret (std::string content);
    std::string getFirstName();  
    std::string getLastname();
    std::string getNickname();
    std::string getPhonenumber();
    std::string getDarkest_secret();
};
#endif