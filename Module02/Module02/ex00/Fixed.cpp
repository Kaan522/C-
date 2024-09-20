#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fix_p = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    fix_p = other.getRawBits();
    return *this;
}
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fix_p);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_p = raw;
}