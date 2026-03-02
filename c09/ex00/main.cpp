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


int main ()
{
    std::fstream infil;
    std::string  buff;
    
    infil.open("pl.csv");
    
    std::getline(infil,buff);
    if (buff != "date,exchange_rate")
    {
        std::cout << "format not valid "<<std::endl;
        return -1;
    }

    std::map<std::string,int> csv_file;
    std::string line;
    std::string key; 
    int val;

    while (std::getline(infil,line))
    {
        std::stringstream ss(line);
        std::getline(ss,key,',');
        ss >> val;
        csv_file[key] = val;
    }
    // std::map<std::string,int>::iterator it_b = csv_file.begin();
    // std::map<std::string,int>::iterator it_e = csv_file.end();

    // for (;it_b != it_e;++it_b)
    //     std::cout << it_b->first << " | " << it_b->second << std::endl;

    std::fstream input;
    std::string buff_2;
    input.open("input.txt");

    std::getline (input,buff_2);

    if  (buff_2 != "date | value"){
        std::cout << "format input  invalid "<<std::endl;
        return -1;
    }
    std::map<std::string,int> inp;

    while (std::getline(input,line)){
        std::stringstream ss(line);
        std::getline(ss,key,'|');
        if (!(ss >> val))
        {
            std::cerr << "Invalid value in line: " << line << std::endl;
            continue;
        }
        key = trim(key);
        ss >> val;
        inp[key] = val;
    }

    std::map<std::string,int>::iterator it_b = inp.begin();
    std::map<std::string,int>::iterator it_e = inp.end();

    for (;it_b != it_e;++it_b)
    {
        std::map<std::string,int>::iterator fin;
        fin = csv_file.find(it_b->first);
        std::cout << fin->first << "|" << fin->second << std::endl;
    }

    
}