#include "poly.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "===== Correct Polymorphism =====" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;     // Should print "Dog"
    std::cout << i->getType() << std::endl;     // Should print "Cat"

    i->makeSound();   // Cat sound  ✔
    j->makeSound();   // Dog sound  ✔
    meta->makeSound();// Animal sound ✔

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << "===== Wrong Polymorphism =====" << std::endl;

    const WrongAnimal* w = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->getType() << std::endl;    // Should print "WrongCat"

    wc->makesound();   // ❌ Should print WrongAnimal sound (NO polymorphism)
    w->makesound();    // WrongAnimal sound

    delete w;
    delete wc;

    return 0;
}
