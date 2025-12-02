#pragma once 
#include <iostream>
#include <cmath>

class Fixed{
    int value;
    static const int fractional_bits = 8;
public :
    Fixed();
    Fixed(int number);
    Fixed(const float b);
    Fixed(const  Fixed& other);
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};
std::ostream& operator<<(std::ostream& out, const Fixed& other);