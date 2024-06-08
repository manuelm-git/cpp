#pragma once
#include <iostream>
#include <string>
#include <cmath>
class Fixed
{
private:
    int value;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed operator<=(Fixed const &src)  const;
    Fixed operator>=(Fixed const &src)  const;
    Fixed operator<(Fixed const &src)   const;
    Fixed operator>(Fixed const &src)   const;

    Fixed operator++(int);
    Fixed operator--(int);
    Fixed &operator++(void);
    Fixed &operator--(void);
    
    Fixed operator/(Fixed const &src)   const;
    Fixed operator*(Fixed const &src)   const;
    
    Fixed operator!=(Fixed const &src)  const;
    Fixed operator==(Fixed const &src)  const;

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &output, Fixed const &value);



