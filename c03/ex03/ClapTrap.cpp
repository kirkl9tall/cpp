#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target){
    if (!EnergyPoints)
    {
        std::cout  << " Not enough energy  to use this spell"<< std::endl;
        return;
    }
    if (HitPoints)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << " - " << AttackDamage <<  " POD !"<< std::endl;
        EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    HitPoints -= amount; 
}

void ClapTrap::beRepaired(unsigned int amount){
    if (!EnergyPoints)
    {
       std::cout  << " Not enough energy  to use this spell"<< std::endl;
       return ;
    }
    if(HitPoints)
    {
        std::cout << "Claptrap + " <<  amount << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    }    
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap Constructor  was called " << std::endl;
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called " << std::endl;
}