#include "Fixed.hpp"

Fixed::Fixed():value(0){
    std::cout << "Default constructor called" <<std::endl;
}
Fixed::Fixed(int number){
    value = number << fractional_bits;
    std::cout << "int  constructor called" <<std::endl;
}
Fixed::Fixed(const float b){
    value  = roundf(b *(1 << fractional_bits));
    std::cout << "float constuctor called"<<std::endl;
}
Fixed::Fixed(const  Fixed& other):value(other.value){
    std::cout << "Copy constructor called" <<std::endl;
}
Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" <<std::endl;
    if (this != &other)
        value = other.value;
    return *this;
}
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" <<std::endl;
    return (value);
}

void Fixed::setRawBits( int const raw ){
    value = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" <<std::endl;
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(value)/ (1<< fractional_bits);
}
int Fixed::toInt( void ) const{
    return value >> fractional_bits;
}
std::ostream& operator<<(std::ostream& out, const Fixed& other){

        out << other.toFloat();
        return out;
}
