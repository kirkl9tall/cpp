#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weap):    name(name), weapon(weap)
{
}

void HumanA::attack()
{
    std::cout << name << " : " << weapon.getType() << std::endl;
}


