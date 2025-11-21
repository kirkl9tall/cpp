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
    void set_FirstName (std::string content){
        firstName = content;
    }    void setLastname (std::string content){
        lastName = content;
    }    void setNickname (std::string content){
        nickname = content;
    }    void setPhonenumber (std::string content){
        phoneNumber = content;
    }    void setDarkest_secret (std::string content){
        darckestSecret = content;
    }
    std::string getFirstName()
    {
        return(firstName);
    }    
    std::string getLastname()
    {
        return(lastName);
    } 
    std::string getNickname()
    {
        return(nickname);
    }    
    std::string getPhonenumber()
    {
        return(phoneNumber);
    }
    std::string getDarkest_secret()
    {
        return(darckestSecret);
    }
};
#endif