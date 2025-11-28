#include <iostream>


int main  ()
{
    std::string a = "HI THIS IS BRAIN";
    std::string *stringPTR =  &a;
    std::string &stringREF = a;

    
    std::cout << "a adress : " << &a << std::endl;
    std::cout << "stringREF adress : " << &stringREF << std::endl;
    std::cout << "stringPRT adress : " << stringPTR << std::endl;
    
    
    std::cout << "a value : " << a << std::endl;
    std::cout << "stringPTR value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;
}