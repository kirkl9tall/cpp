#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    Zombie *b;
    static_cast<void>(name);
    b = new Zombie[N];
    return b;
}