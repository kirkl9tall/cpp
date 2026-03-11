#include "PmergeMe.hpp"


// int  binary_insertion_sort (std::vector<int> &container)
// {

// }

std::vector<int> fun1(std::vector<int> &container)
{
    if (container.size()<= 1)
        return container;
    
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
    std::vector<int> new_main_ch;
    new_main_ch = fun1(main_ch);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::vector <int > new_pend;
    
    // std::vector<int>::iterator it = main_ch.begin();
    for (size_t i = 0 ; i < new_main_ch.size(); i++)
    {   
        size_t j = 0;
        for (; j < main_ch.size();j++)
        {
            if ( new_main_ch[i]== main_ch[j])
                break;
        }
        new_pend.push_back(pend[j]);
    }
    if (new_pend.size() < pend.size())
        new_pend.push_back(pend[pend.size()-1]);

    std::vector<int> result;
    result = new_main_ch;
    //////////////////////////  jacobsthal numbers ////////////////////////////
    result.insert(result.begin(),new_pend[0]);
    ////// test /////
    for (size_t i = 1; i < new_pend.size(); ++i)
    {
        int value = new_pend[i];
        int winner = new_main_ch[i];

        // find position of winner in result
        size_t pos = 0;
        while (pos < result.size() && result[pos] != winner)
            pos++;

        // binary search in range [0 … pos]
        size_t left = 0;
        size_t right = pos;

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (value < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, value);
    }
    //// after the loop 
    if (pend.size() > new_pend.size())
    {
        int value = pend.back();

        size_t left = 0;
        size_t right = result.size();

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (value < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, value);
    }

     // 1-  create a vector that containes the indexes  what to  insert first /////
     // 2- function  that give you the  vector  that  have indexes of the  jacobs number ;

    // 3 -  binary insertion sort 


    return result;
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
        // std::cout  << " last swap "<<  cont1[0] << " | " << cont1[1] << std::endl;
        std::vector<int>::iterator it  =  cont1.begin();
        for (;it != cont1.end();++it)
            std::cout << *it << " ";
    }
    else
        std::cout << "error !" << std::endl;
    std::cout << std::endl;
}



// Yes — but that answer is too vague for a defense.

// You need a precise reason.

// Here is the exact explanation you should understand:

// When you insert sequentially:

// a1, a2, a3, a4, ...

// The size of the search window grows irregularly.

// Example of window sizes (roughly):

// 1
// 2
// 3
// 4
// 5
// ...

// Binary search comparisons for those sizes are:

// 0
// 1
// 2
// 2
// 3
// 3
// 3
// ...

// So some insertions use more comparisons than necessary.

// Ford–Johnson tries to control the insertion order so that:

// Each insertion happens in a window of size:

// 2^k − 1

// Examples:

// 1
// 3
// 7
// 15
// 31
// ...

// Why?

// Because binary search on:

// 2^k − 1 elements

// always takes exactly:

// k comparisons

// No wasted comparison.

// Sequential insertion does not guarantee that.

// That is the real reason.

// So the correct defense answer is:

// Sequential insertion creates suboptimal search window sizes, which increases worst-case comparisons.
// Ford–Johnson uses Jacobsthal ordering to keep insertion windows close to 2^k − 1, minimizing comparisons.

// That is precise.

// Now we move carefully to Jacobsthal.