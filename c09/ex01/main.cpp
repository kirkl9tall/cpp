#include "RPN.hpp"

Operator getOperator(char c)
{
    if (c == '+') return ADD;
    if (c == '-') return SUB;
    if (c == '*') return MUL;
    if (c == '/') return DIV;
    return NONE;
}
int  isOperator (char a)
{   
    if ( a == '+' ||a == '-' ||a == '/' ||a == '*')
        return 1;
    return 0;
}

int main  (int argc , char *argv[])
{
    if (argc ==2)
    {
        std::stack<int> stock;
        int i = 0;
        int a;
        int b;
        while (argv[1][i])
        { 
            if (argv[1][i] == ' ')
            {
                i++;
                continue;
            }
            if (isdigit(argv[1][i]))
                stock.push(argv[1][i] - 48);
            else  if (isOperator(argv[1][i]))
            {
                Operator op = getOperator(argv[1][i]);

                if (stock.size() < 2 )
                {
                    std::cerr << " bad input ! for example " << std::endl;
                    return 1; 
                }

                b = stock.top();
                stock.pop();

                a = stock.top();
                stock.pop();

                int result;
                switch (op)
                {
                case ADD:
                    result = a+b;
                    break;
                case SUB:
                    result = a-b;
                    break;
                case MUL:
                    result  = a*b;
                    break;
                case DIV:
                    if (b == 0)
                    {
                        std::cerr << "Error division!" << std::endl;
                        return 1;
                    }
                    result = a/b;
                    break;
                case NONE:
                    break;
                default:
                    return 1;
                }
                stock.push(result);
            }
            else
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
            i++;
        }
        // check the result ;;;;;
        if (stock.size() != 1)
        {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        std::cout << stock.top() << std::endl;
    }
    else 
    {
        std::cout << "Bad input ! " << std::endl;
    }
    return  0;
}