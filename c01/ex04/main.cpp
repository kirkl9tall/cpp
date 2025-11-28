#include <iostream>
#include <cstring> 
#include <fstream>
#include <algorithm>

int main (int argc,char *argv[])
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string to_find = argv[2];
        if(to_find.empty())
            return -1;
        std::string replacement = argv[3];
        std::string str;
        std::ifstream fl(filename);
        if(!fl.is_open())
            return -1;
        std::ofstream rep(filename+".repalce");
        if(!rep.is_open())
            return -1;
        while (getline(fl, str))
        {
            int pos = 0;    
            int found = str.find(to_find,pos);
            while (found != std::string::npos)
            {
                rep << str.substr(pos, found - pos);
                rep << replacement;
                pos = found + to_find.length();
                found = str.find(to_find, pos);
            }
            rep << str.substr(pos) << std::endl;
        }
    }
    else
        std::cout << "Syntax Error" << std::endl;
}