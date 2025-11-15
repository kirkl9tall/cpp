#include <iostream>

class megaphone{
public:
   void  announce(char *c)
    {
        int i = 0;
        while(c[i])
            std::cout << static_cast<char>(std::toupper(c[i++])); 
    }
    void finish()
    {
        std::cout << std::endl;
    }
};

int main (int argc,char *argv[])
{
    megaphone a;

    if (argc > 1)
    {
        int  i = 1;
        while (argv[i])
            a.announce(argv[i++]);
        a.finish();
    }
    else 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        a.finish();
    }
}

