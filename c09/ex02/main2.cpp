#include "PmergeMe.hpp"


std::vector<int> fun1(std::vector<int> &container)
{
    if (container.size()<= 1)
        return container;
    
    size_t i = 0;
    std::vector<int> main_ch;
    // build pairs vect
    std::vector<std::pair<int,int>> pairs;
    bool hasStraggler = false;
    int straggler = 0;
    while(i < container.size())
    {
        if (i+1 < container.size())
            pairs.push_back(std::make_pair((container[i+1] < container[i] ? container[i+1] : container[i]),(container[i+1] < container[i] ? container[i] : container[i+1])));
        else 
        {
            hasStraggler = false;
            straggler = 0;
        }
        i +=2; 
    }
    //  2 - extract winers .
        for (int i = 0; i < pairs.size();i++)
            main_ch.push_back(pairs[i].second);
    // 3 - recursivley  sort  main_chain .
    main_ch = fun1(main_ch);
    // 4 insert    pending elements .
    std::vector<int> result = main_ch;
    // result.insert(result.begin(), pend[0]);

    return main_ch;
}