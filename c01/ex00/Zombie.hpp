#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
class Zombie {
    std::string name;
    public:
    Zombie(std::string a);
    ~Zombie();
    void announce(void);
};
void randomChump( std::string name);
Zombie* newZombie(std::string str);
#endif