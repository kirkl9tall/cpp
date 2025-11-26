#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    std::string type;
public:
    Weapon(std::string);
    const std::string& getType()const;   
    void setType(std::string);

};
#endif