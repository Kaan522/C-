#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
    int  fix_p;
    static const int f_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    Fixed& operator=(const Fixed& obj);
 };

#endif