#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "hello " << std::endl; 
}
Zombie::~Zombie()
{
    std::cout << "Good bye !" << std::endl;
}
int main ()
{
    int N = 0;
    std::cout << "Veillez entrer le nombre  de votre horde : ";
    std::cin >> N;

    Zombie *a;
    a = zombieHorde(N,"test");
    std::cout << &a << std::endl;
    delete[] a;
}