#pragma once

#include <iostream>
#include  <string>
#include <climits>
#include <iomanip>
#include <cmath>
enum LiteralType {
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_SPECIAL_FLOAT,
    TYPE_SPECIAL_DOUBLE,
    TYPE_INVALID
};

class ScalarConverter{
public:
    static void convert(std::string const& rep);
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter& other);
    ScalarConverter&operator=(ScalarConverter& other);
    ~ScalarConverter();
};
