#include "Fixed.hpp"

Fixed::Fixed():value(0){
}
Fixed::Fixed(int number){
    value = number << fractional_bits;
}
Fixed::Fixed(const float b){
    value  = roundf(b *(1 << fractional_bits));
}
Fixed::Fixed(const  Fixed& other):value(other.value){
}
Fixed& Fixed::operator=(const Fixed& other){
    if (this != &other)
        value = other.value;
    return *this;
}
int Fixed::getRawBits( void ) const{
    return (value);
}

void Fixed::setRawBits( int const raw ){
    value = raw;
}

Fixed::~Fixed(){
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

//operators : 
    bool Fixed::operator>(const Fixed& other)const {
        return (this->value > other.value);
    }
    bool Fixed::operator<(const Fixed& other)const {
        return (this->value < other.value);
    }
        bool Fixed::operator>=(const Fixed& other)const {
        return (this->value >= other.value);
    }
        bool Fixed::operator<=(const Fixed& other)const {
        return (this->value <= other.value);
    }
        bool Fixed::operator==(const Fixed& other)const {
        return (this->value == other.value);
    }
        bool Fixed::operator!=(const Fixed& other)const {
        return (this->value != other.value);
    }

    // arethmitic operator

    Fixed Fixed::operator+(const Fixed& other){
        return (this->toFloat() + other.toFloat());
    }
    Fixed Fixed::operator-(const Fixed& other){
        return (this->toFloat() - other.toFloat());
    }
    Fixed Fixed::operator*(const Fixed& other){
        return (this->toFloat() * other.toFloat());
    }
    Fixed Fixed::operator/(const Fixed& other){
        return (this->toFloat() / other.toFloat());
    }
    // increment decrement operators :

    Fixed& Fixed::operator++(){
        this->value++;
        return (*this);
    }

    Fixed Fixed::operator++(int){
        Fixed temp = *this;
        value++;
        return (temp);
    }
    Fixed& Fixed::operator--(){
        this->value--;
        return (*this);
    }
    Fixed Fixed::operator--(int){
        Fixed temp = *this;
        value--;
        return (temp);
    }

    Fixed& Fixed::max(Fixed& a ,Fixed& b ){
        return (a > b ? a : b);

    }
    const Fixed& Fixed::max(const Fixed& a ,const Fixed& b){
        return (a > b ? a : b);
    }
    Fixed& Fixed::min(Fixed& a,Fixed& b){
        return (a < b ? a: b);

    }
    const Fixed& Fixed::min(const Fixed& a,const Fixed& b){
        return (a < b ? a: b);
    }