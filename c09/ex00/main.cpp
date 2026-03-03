#include "BitcoinExchange.hpp"

int main (int argc,char *argv[])
{
    if (argc == 2)
    {
        btc_ex(argv);
    }
    else
        std::cout << "invalid  args !" << std::endl;
}