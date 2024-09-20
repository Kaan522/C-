#include "Fixed.hpp"


Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed::Fixed(void)
{   
    this->fix_p = 0;
}

Fixed::Fixed(const int value)
{
    this->fix_p = (value << f_bits);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const float number)
{
    this->fix_p = (int)roundf(number * (1 << f_bits));  // 256 ile sayıyı çarpıp roundf yuvarlayıp tam sayıya çeviriyo
}

float Fixed::toFloat(void) const
{
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

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->fix_p = fixed.getRawBits();
    return(*this);
}

Fixed Fixed::operator+(const Fixed &fixed1) const
{
    return(Fixed(fixed1.toFloat() + this->toFloat()));
}
Fixed Fixed::operator-(const Fixed &fixed1) const
{
     return(Fixed(fixed1.toFloat() - this->toFloat()));
}
Fixed Fixed::operator*(const Fixed &fixed1) const
{
     return(Fixed(fixed1.toFloat() * this->toFloat())); // this->float 5.05 class ının floatı fixed1 de 2 nin.  gelen iki değeri float a çevirip çarpıyo ondan sonra return değerinde ise bir class oluşuyor ve o classın float değer alan bir constructerı çalışıyo.
}
Fixed Fixed::operator/(const Fixed &fixed1) const
{
     return(Fixed(fixed1.toFloat() / this->toFloat()));
}
bool Fixed::operator>(const Fixed &fixed1) const
{
     return(this->toFloat() > fixed1.toFloat());
}
bool Fixed::operator<(const Fixed &fixed1) const
{
       return(this->toFloat() < fixed1.toFloat());
}
bool Fixed::operator>=(const Fixed &fixed1) const
{
       return(this->toFloat() >= fixed1.toFloat());
}
bool Fixed::operator<=(const Fixed &fixed1) const
{
      return(this->toFloat() <= fixed1.toFloat());
}
bool Fixed::operator==(const Fixed &fixed1) const
{
       return(this->toFloat() == fixed1.toFloat());
}
bool Fixed::operator!=(const Fixed &fixed1) const
{
      return(this->toFloat() != fixed1.toFloat());
}
Fixed &Fixed::operator++(void)
{
    (this->fix_p)++;
     return(*this);
}
Fixed &Fixed::operator--(void)
{
    (this->fix_p)--;
     return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    (this->fix_p)++;
     return(tmp);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    (this->fix_p)--;
     return(tmp);
}

Fixed Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return(Fixed(fixed2));
    return(Fixed(fixed1));
}

Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return(Fixed(fixed2));
    return(Fixed(fixed1));
}

Fixed Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 >= fixed2)
        return(Fixed(fixed1));
    return(Fixed(fixed2));
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 >= fixed2)
        return(Fixed(fixed1));
    return(Fixed(fixed2));
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj)
{
    out << obj.toFloat();
    return(out);
}