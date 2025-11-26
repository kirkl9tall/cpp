#include "HumanB.hpp"

HumanB::HumanB(std::string a)
{
    name = a;
}
void HumanB::attack()
{
    std::cout << name << b->getType() << std::endl;
    
}
void HumanB::setWeapon(Weapon weapon)
{
    b = &weapon;
}
void HumanB::setType(std::string type)
{
    b->setType(type);
}