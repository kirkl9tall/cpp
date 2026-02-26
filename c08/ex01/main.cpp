#include "Span.hpp"

int main ()
{
    try{
        Span v(18);
        std::vector<int> vec;
        for (int i = 0; i < 15 ;i++)
        {
            vec.push_back(rand());
            i++;
        }
        v.addNumbers(vec);
        // v.addNumber(3);
        // v.addNumber(4);
        // v.addNumber(7);
        // v.addNumber(8);
        // v.addNumber(9);
        std::cout << v.shortestSpan()<<std::endl;
        std::cout << v.longestSpan()<<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what()<< std::endl;
    }
}

