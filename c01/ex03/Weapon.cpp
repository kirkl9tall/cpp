#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
    return (type);
}
void  Weapon::setType(std::string a){
    type = a;
}

Weapon::Weapon(std::string type){
    this->type = type;
}
