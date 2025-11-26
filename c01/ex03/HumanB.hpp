#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
    std::string name;
    Weapon *b;
public:
    HumanB(std::string a);
    void attack();
    void setWeapon(Weapon weapon);
    void setType(std::string type);
};
#endif