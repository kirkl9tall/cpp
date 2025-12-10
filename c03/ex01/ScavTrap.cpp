#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "Scavtrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100 ;
    EnergyPoints = 50;
    AttackDamage = 20;
}


void ScavTrap::guardGate(){
    std::cout <<"the ScavTrap "<< Name << " is now in Gate keeper mode"<<std::endl; 
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called " << std::endl;
}
void ScavTrap::attack(const std::string& target){
        if (!EnergyPoints)
    {
        std::cout  << " Not enough energy  to use this spell"<< std::endl;
        return;
    }
    if (HitPoints)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << " - " << AttackDamage <<  " POD !"<< std::endl;
        EnergyPoints--;
    }
}

