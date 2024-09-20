#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fix_p = 0;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fix_p = (value << f_bits); 
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    fix_p = other.getRawBits();
    return *this;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const float number)
{
    this->fix_p = (int)roundf(number *(1 << f_bits));
    std::cout << "Float constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}

float Fixed::toFloat(void) const{
    return((float)this->fix_p / (256));
}

int Fixed::toInt(void) const
{
    return((int)roundf((float)this->fix_p / (256)));
}

int Fixed::getRawBits() const
{
    return(this->fix_p);
}

void Fixed::setRawBits(int const raw)
{
    this->fix_p = raw;
}