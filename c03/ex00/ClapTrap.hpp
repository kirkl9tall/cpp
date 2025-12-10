#pragma once
#include <iostream>

class ClapTrap {

    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
    public : 
    ClapTrap(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};