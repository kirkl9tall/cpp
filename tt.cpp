#include <iostream>


class test {
public:

    int  addition(int  a, int b)
    {
        return (a+b);
    }
};

int main  ()
{
    test a;

    int (test::*ptr_mf)(int ,int) = &test::addition;
    int b  = (a.*ptr_mf)(2,3);

    std::cout << b << std::endl;
}