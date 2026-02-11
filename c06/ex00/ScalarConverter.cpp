#include "ScalarConverter.hpp"

bool isPrintable(char c) {
    return (c >= 32 && c <= 126);
}

bool isIntLiteral(const std::string& s) {
    size_t  i = 0;

    if (s[i] == '+' || s[i] == '-')
        i++;

    if (i == s.length())
        return false;

    for (; i < s.length(); i++) {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

bool isDoubleLiteral(const std::string& s) {
    bool dot = false;
    size_t i = 0;

    if (s[i] == '+' || s[i] == '-')
        i++;

    for (; i < s.length(); i++) {
        if (s[i] == '.' && !dot)
            dot = true;
        else if (!std::isdigit(s[i]))
            return false;
    }
    return dot;
} 


bool isFloatLiteral(const std::string& s) {
    if (s[s.length() - 1] != 'f')
        return false;

    std::string core = s.substr(0, s.length() - 1); // for removing f from the srting 
    return (isDoubleLiteral(core));
} 

LiteralType detectType(const std::string& rep) {

    // CHAR: 'a'
    if (rep.length() == 1 && isPrintable(rep[0]))
        return TYPE_CHAR;

    // SPECIAL DOUBLE
    if (rep == "nan" || rep == "+inf" || rep == "-inf")
        return TYPE_SPECIAL_DOUBLE;

    // SPECIAL FLOAT
    if (rep == "nanf" || rep == "+inff" || rep == "-inff")
        return TYPE_SPECIAL_FLOAT;

    // INT
    if (isIntLiteral(rep))
        return TYPE_INT;

    // FLOAT
    if (isFloatLiteral(rep))
        return TYPE_FLOAT;

    // DOUBLE
    if (isDoubleLiteral(rep))
        return TYPE_DOUBLE;

    return TYPE_INVALID;
}

void ScalarConverter::convert(std::string const& rep){

LiteralType type = detectType(rep);

    if (type == TYPE_INVALID) {
        std::cout << "Invalid literal" << std::endl;
        return;
    }
    double x  = strtod(rep.c_str(),NULL);

    if (type == TYPE_CHAR)
        std::cout << "char : '" << rep[0] << "'\n";
    else if (std::isnan(x) || std::isinf(x) || x < 0 || x > 127)
        std::cout << "char : impossible\n";
    else if (!isPrintable(static_cast<char>(x)))
        std::cout << "char : Non displayable\n";
    else
        std::cout << "char : '" << static_cast<char>(x) << "'\n";
    /// int 
    if (type == TYPE_CHAR)
        std::cout << "int : "<<static_cast<int>(rep[0])<<std::endl;
    else if (std::isnan(x) || std::isinf(x) || x < INT_MIN || x > INT_MAX)
        std::cout << "int: impossible"<<std::endl;
    else 
        std::cout << "int : " << static_cast<int>(x) << "\n";
    // float 
    if (type == TYPE_CHAR)
        std::cout << "float : "<< std::fixed <<std::setprecision(1)<<static_cast<float>(rep[0])<< "f"<<std::endl;
    else if (type == TYPE_SPECIAL_FLOAT || type == TYPE_SPECIAL_DOUBLE)
        std::cout << "float: "<< std::fixed <<std::setprecision(1) <<  static_cast<float>(x)<<"f"<<std::endl;
    else if (type == TYPE_FLOAT ||type == TYPE_INT||type == TYPE_DOUBLE)
        std::cout << "float: "<< std::fixed <<std::setprecision(1) <<  static_cast<float>(x)<< "f"<<std::endl;
    //double 
    if (type == TYPE_CHAR)
        std::cout << "double : "<< std::fixed <<std::setprecision(1)<<static_cast<double>(rep[0])<<std::endl;
    else if (type == TYPE_SPECIAL_FLOAT || type == TYPE_SPECIAL_DOUBLE)
        std::cout << "double : "<< std::fixed <<std::setprecision(1) <<(x)<<std::endl;
    else if (type == TYPE_FLOAT ||type == TYPE_INT||type == TYPE_DOUBLE)
        std::cout << "double : "<< std::fixed <<std::setprecision(1) <<(x)<<std::endl;
} 

    ScalarConverter::ScalarConverter(){

    }
    ScalarConverter::ScalarConverter(ScalarConverter& other){
        (void)other;
    }
    ScalarConverter& ScalarConverter::operator=(ScalarConverter& other){
        (void)other;
        return *this;
    }
    ScalarConverter::~ScalarConverter(){
        
    }