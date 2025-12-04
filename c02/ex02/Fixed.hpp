#ifndef FIXED_HPP
#define FIXED_HPP

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
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    //operators comparaison  : 
    Fixed& operator=(const Fixed& other);
    bool operator>(const Fixed& other)const ;
    bool operator<(const Fixed& other)const ;
    bool operator<=(const Fixed& other)const ;
    bool operator>=(const Fixed& other)const ;
    bool operator==(const Fixed& other)const ;
    bool operator!=(const Fixed& other)const ;
    //operators  arethmetic:
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);
    // comparaison  operators : 

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static  Fixed& max(Fixed& a ,Fixed& b );
    static  const Fixed& max(const Fixed& a ,const Fixed& b);
    static  Fixed& min(Fixed& a,Fixed& b);
    static  const  Fixed& min(const Fixed& a,const Fixed& b);
    ~Fixed();
};
std::ostream& operator<<(std::ostream& out, const Fixed& other);
#endif