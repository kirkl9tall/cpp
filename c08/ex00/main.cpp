#include "easyfind.hpp"

int main(){

    std::vector<int> v;

    v.push_back(21);
    v.push_back(22);
    v.push_back(23);
    v.push_back(24);
    v.push_back(25);
    try{
    std::vector<int>::iterator it;
        it = easyfind(v,22);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}