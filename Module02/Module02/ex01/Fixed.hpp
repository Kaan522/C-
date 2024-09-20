#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int fix_p;
    static const int f_bits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float number);
    Fixed(const Fixed &obj);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed& operator=(const Fixed& other);
};

std::ostream &operator << (std::ostream &out, const Fixed &obj);

#endif