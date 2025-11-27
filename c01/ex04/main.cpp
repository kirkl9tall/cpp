#include <iostream>
#include <cstring> 
#include <fstream>

// class Replace {
//     std::string filename;
//     std::string replaced;
// public:
//     Replace(std::string);

//     std::string *search(std::string s1,std::string s2);
// };

// std::string Replace::*search (std::string s1, std::string s2)
// {


//     return ;
// }

// Replace::Replace (const std::string a): filename(a)
// {}
int main (int argc,char *argv[])
{
    if (argc == 4)
    {
        if (!argv[1]|| !argv[2]|| !argv[3])
            return (1);
        // std::string str;
        // std::ifstream fl(argv[1]);
        // while (getline(fl, str))
        //     std::cout << str << std::endl;
        
    }
    else
        std::cout << "Syntax Error" << std::endl;

}