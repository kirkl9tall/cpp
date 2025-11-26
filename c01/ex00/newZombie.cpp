#include "Zombie.hpp"


Zombie* newZombie(std::string str)
{
    Zombie *a;
    a = new Zombie(str);
    a->announce();
    return (a);
}