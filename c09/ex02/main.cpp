#include "PmergeMe.hpp"


std::vector<int> fun1(std::vector<int> &container)
{
    // typedef typename std::vector<int>::iterator iter;
    size_t i = 0;
    std::vector<int> main_ch;
    std::vector<int> pend;

    while(i < container.size())
    {
        if (i+1 < container.size())
        {
            main_ch.push_back(container[i+1] < container[i] ? container[i] : container[i+1]);
            pend.push_back(container[i+1] < container[i] ? container[i+1] : container[i]);
        }
        else 
            pend.push_back(container[i]);
        i +=2; 
    } 

    size_t y = 0; 
        std::cout << " main : ";
        while (y < main_ch.size())
        {
            std::cout << main_ch[y] << " ";
            y++;
        }
        std::cout << std::endl;
        y = 0;
        std::cout << " pend : ";
        while (y < pend.size())
        {
            std::cout << pend[y] << " ";
            y++;
        }
        std::cout << std::endl;
        std::vector<int> second;
        if(main_ch.size() == 1)
            return main_ch;
        else if (main_ch.size() == 2)
        {
            if (main_ch[0] > main_ch[1])
                std::swap(main_ch[0],main_ch[1]);
            return  main_ch;
        }
        second = fun1(main_ch);
        return second;
}

int main (int argc, char *argv[])
{
    if (argc > 1)
    {   
        std::vector<int> cont;
        std::vector<int> cont1;

        char **end = NULL;
        int i = 1;
        while (argv[i])
        {
            cont.push_back(strtod(argv[i],end));
            i++;
        }
        // vector parsed  we have a ready to use vector 
        cont1 = fun1(cont);
        std::cout  << " last swap "<<  cont1[0] <<" | "<< cont1[1] << std::endl ;
    }
    else
        std::cout << "error !" << std::endl;
}