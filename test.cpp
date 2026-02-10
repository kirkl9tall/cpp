#include <iostream>

// int func();
// int func1();
// int func2();
// int func3();

// int  func()
// {
//     func1();
// }

// int  func1()
// {
//     func2();
// }

// int  func2()
// {
//     func3();
// }

// int  func3()
// {
//     return -1;
// //   throw 2;
// }

// int main()
// {
//     // try
//     // {
//         func();
//     // }
//     // catch (int a)
//     // {
//     //     std::cout << a << std::endl;
//     // }
// }


class a {
public:
    int fun3(int b);
    int fun1(int b);
    int fun2(int b);
};

int a::fun1(int b)
{
    return  1;
}
int a::fun2(int b)
{
    return 2;
}
int a::fun3(int b)
{
    return  3;
}

int main ()
{
    a b;

    int (a::*ptr1[3])(int) = {&a::fun1,&a::fun2,&a::fun3};

    int x  = (b.*ptr1[1])(5);

    std::cout << x << std::endl;

}