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

// class motor{
// public :
//     virtual void puissanse()= 0;
//     virtual void litrage()= 0;
// };

// class Car {
//     protected:
//     std::string name;
//     int model;
//     public:
//     Car(){std::cout << " Car "<< std::endl;}
//     void option_a ()
//     {
//         std::cout << "ABS"<<std::endl;
//         std::cout << "ABR"<<std::endl;
//     }
//     virtual void option_b()= 0;
//     // virtual void option_b() {
//     //     std::cout << "no options "<<std::endl;
//     // };
//     virtual void option_c(){
//         std::cout  << "4 doors finger print" <<std::endl;
//     }
// };

// class opel : public Car
// {
//     public:
//     opel(){std::cout <<" opel "<<std::endl;}

//     void option_b(){
//         name = "Astra";
//         std::cout << name << " camera"<< std::endl;
//         std::cout << name << " radar" << std::endl;
//     }
// };

// class dacia : public Car
// {
//     public:
//     dacia(){std::cout <<" dacia "<<std::endl;}

//     void option_b(){
//         name = "logan";
//         std::cout << name << " camera"<< std::endl;
//         std::cout << name << " radar" << std::endl;
//     }
// };

// class mercedes : public Car, public motor
// {
//     public:
//     mercedes(){std::cout <<" mercedes "<<std::endl;}

//     void option_b(){
//         name = "mercedes ";
//         std::cout << name << " camera"<< std::endl;
//         std::cout << name << " radar" << std::endl;
//         std::cout << name << " ABS" << std::endl;
//         std::cout << name << " ABR" << std::endl;
//     }
//     void option_c(){
//         std::cout << "coussin chauvage" << std::endl;
//     }
//     void puissanse(){
//         std::cout  << "ploplo";
//     }
//     void litrage (){
//         std::cout  << "dsds";
//     }
// };

// class brabus : public mercedes{

// };

// int main  ()
// {
//     // every time that we want to  create an object we must preknow what type of car we will need , but we can do this :
//     ////// Car *x = new opel;
//     // in this case the  pointer car can point on  the opel  or what ever  car that inheritate from him .
//     // but  can we access to the methodes of the opel  ??  obviously  no   we can not do that  just  with this pointer  we will need 
//     // vitrual  functions 
//     ////////x->option_a();
//     //as you can see  we  can not  access to the  members of the  child , lets like try to use  the virtual  functions  in  this case 
//     // we  should know the name of those members that we want to get access to them , for example the option_b must be  virtual in the  fathers class
//     //   now after making this    virtual void option_b()= 0; in the base class  we will see if we have access to  this option from the  car class

//     //////// x->option_b();
//     // let's  compile and see if  it is accessible .
//     // yes  it is accessible  but what it goes under the hood : 
//     //  creation of vtable that  have adresses of  virtual functions . 
//    //////// // delete x;
//     // when a class becomes  abstract  by creating  a pure virual  function  you can't create an object from it .
//     // pure  is when you  give no implementation for a virtual function .

//     // Car *ope = new opel ;

//     // Car *dac = new dacia;
//     // Car *mer = new mercedes;

//     // ope->option_b();
//     // dac->option_b();
//     // mer->option_b();
//     // delete mer;
//     // delete ope;
//     // delete dac;

//     // opel d;

//     // Car& e = d;

//     // e.option_b();
//     // const Car *l = new opel;
// }

// int main  ()
// {

//     Car *doc = new dacia;
//     Car *ap = new opel;
//     Car *mr = new mercedes;
//     motor *mrt = new mercedes;

//     mercedes *k = new brabus;

// }

// class brain{
//     std::string ideas[100];
// };

// class animal {
//     brain* Brain;
//     public:
//     animal();
//     animal(const animal& other);
//     animal& operator=(const animal& other);
//     ~animal();
// };

// animal::animal(){
//     std::cout << "constructor allocated a new brain "<< std::endl;
//     Brain = new brain;
// }

// animal::animal(const animal& other)
// {
//     std::cout << "copy constructor called"<<std::endl;
//     Brain = new brain(*(other.Brain));
// }
// animal& animal::operator=(const animal& other){
//     this->Brain = new brain(*(other.Brain));
//     // this->Brain = other.Brain;
//     return *this;
// }
// animal::~animal(){
//     std::cout << "destructor delete memo  allocation "<< std::endl;
//     delete Brain;
// }

// int main  (void){

//     animal a;
//     animal b;

//     a = b;

// }

#include <string>
#include <exception>





class A{
private:
    const std::string Name;
    int Age;
    int level;
public:
    A(const std::string name,int age);
    A& operator=(A& other);
    const std::string getName()const;
    const int getAge()const;
    const int getLevel()const;
    void levelup();
    void arena();
    void pvp();
    ~A();
// nested classes  
    class ex1:public std::exception{
        const char* what() const throw()
        {
            return("you need level 10 for arena battle");
        }
    };
    class ex2:public std::exception{

        const char* what() const throw()
        {
            return "you need level 15 for pvp";
        }
    };

};
void A::arena()
{
    if (level < 10)
        throw (A::ex1());
    std::cout << "waiting for partner  ... !"<<std::endl;
}
void A::pvp()
{
    if (level < 15)
        throw (A::ex2());
    std::cout << "waiting for opponent ... !"<<std::endl;
}
void A::levelup()
{
    level++;
}
A::A(const std::string name,int age):Name(name),Age(age){
    level = 1;
}

A& A::operator=(A& other){
    // we will not  assign the name cause it is  const
    level = other.level;
    return *this;
}
A::~A(){
    std::cout << Name <<" : has been disconected !"<<std::endl;
}

const std::string A::getName()const 
{
    return (Name);
}
const int A::getAge()const {
    return (Age);
}
const int A::getLevel()const
{
    return level;
}

std::ostream& operator<<(std::ostream& out , const A& player){

    out<< "the player : "<< player.getName() << " Level : " << player.getLevel() << " age : "  << player.getAge();
    return out;
}

int main  ()
{
    A a("abdelilah",30);

    std::cout<< a << std::endl;
    int i = 0;
    while (i < 13)
    {
        a.levelup();
        i++;
    }

    try
    {
        a.arena();
    }
    catch(std::exception &a)
    {
        std::cout << "Exception : " << a.what() << std::endl;
    }
    A b("bouchra",33);
    b = a ;

    std::cout<< b << std::endl;

    try
    {
        b.arena();
    }
    catch (std::exception &a)
    {
        std::cout << "Exception : " << a.what() << std::endl;
    }
}