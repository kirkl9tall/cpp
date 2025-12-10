#include <iostream>



// class Animal{
//     int  val;
//     public:
//     Animal(){
//         std::cout << "Animal constructor was called!"<< std::endl;
//     }
//     static void sound(){
//         std::cout << "animal make a sound" << std::endl;
//     }
//     void set_val(){
//         val = 10;
//     }
//     int get_val()
//     {
//         return (val);
//     }
// };

// class Dog : public Animal {

//     public:
//     void sound (){
//         Animal::sound();
//         set_val();
//         get_val();
//         std::cout << "dog barks" << std::endl;
//     }
// };

// class Cat : public Animal {

//     public:
//     void sound (){
//         std::cout << "Cat  meows" << std::endl;
//     }
// };

// class Cow : public Animal {

//     public:
//     Cow(){
//         std::cout <<"Cow constructor was called !" << std::endl;
//     }
//     void sound (){
//         std::cout << "Cow moos" << std::endl;
//     }

// };

// int main(void)
// {
//     Dog a;
//     a.sound();
//     a.set_val();
//     int z = a.get_val();
//     std::cout << z << std::endl;
    
//     Cat b;
//     b.sound();

//     Cow c;
//     c.sound();
//     int w = c.get_val();
//     std::cout << w << std::endl;
//     return 0;
// }


// class ClapTrap {
// public:
//     ClapTrap(std::string name) {
//         std::cout << "ClapTrap constructed\n";
//     }
//     ~ClapTrap() {
//         std::cout << "ClapTrap destroyed\n";
//     }
//     void attack(std::string target) {
//         std::cout << "ClapTrap attacks " << target << std::endl;
//     }
// };


// class ScavTrap : public ClapTrap {
// public:
//     ScavTrap(int a ) : ClapTrap(name) { // call parent constructor
//         std::cout << "ScavTrap constructed\n";
//     }
//     ~ScavTrap() {
//         std::cout << "ScavTrap destroyed\n";
//     }
//     void attack(std::string target) {
//         std::cout << "ScavTrap attacks " << target << " with style!\n";
//     }
//     void guardGate() {
//         std::cout << "ScavTrap is now guarding!\n";
//     }
// };

// int main () { 

//     ClapTrap a("Hello");
//     a.attack("koko");
    

// }