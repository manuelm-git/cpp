#pragma once
#include <iostream>
#include <string>
class Fixed
{
private:
    int value;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const Fixed &value);
    ~Fixed();
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};





