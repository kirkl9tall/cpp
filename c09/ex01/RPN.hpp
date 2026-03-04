#pragma once

#include <algorithm>
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>

enum Operator
{
    ADD,
    SUB,
    MUL,
    DIV,
    NONE
};
int  isOperator (char a);
Operator getOperator(char c);