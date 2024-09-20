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
    Fixed(void);
    Fixed(const int value);
    Fixed(const float number);
    Fixed(const Fixed &obj);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed &operator =(const Fixed &fixed);
    Fixed operator +(const Fixed &fixed1) const;
    Fixed operator -(const Fixed &fixed1) const;
    Fixed operator *(const Fixed &fixed1) const;
    Fixed operator /(const Fixed &fixed1) const;
    Fixed &operator ++(void);
    Fixed &operator --(void);
    Fixed operator ++(int);
    Fixed operator --(int);

    bool operator>(const Fixed &fixed1) const;
    bool operator<(const Fixed &fixed1) const;
    bool operator>=(const Fixed &fixed1) const;
    bool operator<=(const Fixed &fixed1) const;
    bool operator==(const Fixed &fixed1) const;
    bool operator!=(const Fixed &fixed1) const;

    static Fixed min(Fixed &fixed1, Fixed &fixed2);
    static Fixed min(const Fixed &fixed1, const Fixed &fixed2);

    static Fixed max(Fixed &fixed1, Fixed &fixed2);
    static Fixed max(const Fixed &fixed1, const Fixed &fixed2);
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif