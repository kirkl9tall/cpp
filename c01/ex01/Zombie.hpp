#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie {
    std::string name;
    public:
    Zombie();
    ~Zombie();
    void announce(void);
};
Zombie* zombieHorde( int N, std::string name );

#endif