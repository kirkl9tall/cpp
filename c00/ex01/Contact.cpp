/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:02:52 by abismail          #+#    #+#             */
/*   Updated: 2025/11/22 15:02:53 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "Contact.hpp"

    void Contact::set_FirstName (std::string content){
        firstName = content;
    }    void Contact::setLastname (std::string content){
        lastName = content;
    }    void Contact::setNickname (std::string content){
        nickname = content;
    }    void Contact::setPhonenumber (std::string content){
        phoneNumber = content;
    }    void Contact::setDarkest_secret (std::string content){
        darckestSecret = content;
    }
    std::string Contact::getFirstName()
    {
        return(firstName);
    }    
    std::string Contact::getLastname()
    {
        return(lastName);
    } 
    std::string Contact::getNickname()
    {
        return(nickname);
    }    
    std::string Contact::getPhonenumber()
    {
        return(phoneNumber);
    }
    std::string Contact::getDarkest_secret()
    {
        return(darckestSecret);
    }