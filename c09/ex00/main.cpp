#include "BitcoinExchange.hpp"

std::string trim(const std::string &str)
{
    std::string::size_type start = 0;
    while (start < str.length() && std::isspace(str[start]))
        ++start;

    std::string::size_type end = str.length();
    while (end > start && std::isspace(str[end - 1]))
        --end;

    return str.substr(start, end - start);
}

int main (int argc,char *argv[])
{
    if (argc == 2)
    {
        std::fstream infil;
        std::string  buff;
        
        infil.open("pl.csv");
        if (!infil.is_open())
        {
            std::cerr << "Error: could not open file." << std::endl;
            return 1;
        }

        std::getline(infil,buff);
        if (buff != "date,exchange_rate")
        {
            std::cout << "format not valid "<<std::endl;
            return -1;
        }

        std::map<std::string,float> csv_file;
        std::string line;
        std::string key; 
        float val;

        while (std::getline(infil,line))
        {
            std::stringstream ss(line);
            std::getline(ss,key,',');
            ss >> val;
            csv_file[key] = val;
        }
        std::fstream input;
        std::string buff_2;
        input.open(argv[1]);
        if (!input.is_open())
        {
            std::cout << "Error: could not open file."<<std::endl;
            return 1;
        }
        std::getline (input,buff_2);

        if  (buff_2 != "date | value"){
            std::cout << "format input  invalid "<<std::endl;
            return -1;
        }
        std::map<std::string,float> inp;
        while (std::getline(input,line))
        {

            std::stringstream ss(line);
            if (!std::getline(ss, key, '|'))
                continue;
            key = trim(key);
            // checking value --(--------------- negative  more than  1000  lenght  dyal date 
            if (!(ss >> val) || ( key.length() != 10 /*|| key[4] != '-' || key[7] != '-'*/))
            {
                std::cerr << "Error: bad input" << line << std::endl;
                continue;
            }
            else if  ( val < 0)
            {
                std::cerr << "Error: not positive  num " << line << std::endl;
                continue;
            }
            else if  ( val > 1000)
            {
                std::cerr << "Error: bigger than 1000 " << line << std::endl;
                continue;
            }

            std::map<std::string,float>::iterator it;
            it = csv_file.lower_bound(key);

            if (it != csv_file.end() && it->first == key)
            {
                std::cout << key << " => " << val << " = " << it->second * val << std::endl;
            }
            else
            {
                if  (it == csv_file.begin())
                {
                    std::cerr << "Error: no earlier date available\n";
                    continue;
                }
                --it;
                std::cout << it->second * val << std::endl;
            }
        }
    }
    else
        std::cout << "invalid  args !" << std::endl;
}