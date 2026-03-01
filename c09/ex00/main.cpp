#include "BitcoinExchange.hpp"


int main ()
{
    std::fstream infil;
    std::string  buff;
    
    infil.open("data.csv");
    
    // while (std::getline(infil,buff))
    // {
    //      std::cout << buff<<std::endl;
    // }

    std::getline(infil,buff);
    if (buff != "date,exchange_rate")
    {
        std::cout << "format not valid "<<std::endl;
        return -1;
    }        
    std::cout << buff <<std::endl;
    std::map<std::string,int> csv_file;

    std::string key;
    int val;

    while (std::getline(infil,key,','))
    {
        std::cout << key << std::endl;
        infil >> val;
        std::cout << val << std::endl;
        csv_file[key] = val;
    }

}