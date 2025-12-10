#pragma once 
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap,ScavTrap{
    std::string Name;
    
};