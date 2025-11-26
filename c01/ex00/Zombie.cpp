#include "Zombie.hpp"

Zombie::Zombie(std::string a)
{
    name = a;
}
Zombie::~Zombie()
{
    std::cout << "I am  : " << name << " Iam dead ! even if I am already dead !" << std::endl;
}

void Zombie::announce()
{   
    std::cout<< name << " : BraiiiiiiinnnzzzZ..."<<std::endl;
}


int main ()
{
        randomChump("7zi9a");
        std::string buffer;
        std::cout << "Welcome to the zombie land !"<< std::endl;
        std::cout << "Give a name for a zombie !"<< std::endl;
        if(!std::getline(std::cin,buffer))
            exit(1);
        Zombie * b =  newZombie(buffer);
        delete b;
        while (true)
            ;
}