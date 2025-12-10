#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << "Fragtrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << Name << " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor  called" << std::endl;

}
