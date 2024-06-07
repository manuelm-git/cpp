#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 20;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    //copy constructor is used to initialize a new object from an existing one
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
Fixed &Fixed::operator=(Fixed const &src)
{
    //copy values between already initialized objects
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = src.getRawBits();
    return (*this);
}
int Fixed::getRawBits(void) const
{
    std::cout << "getting raw bits..." << std::endl;
    return (this->value);
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setting raw bits" << std::endl;
    this->value = raw;
}
float Fixed::toFloat(void) const
{
    
}
int Fixed::toInt(void) const    
{
}
std::ostream &operator<<(std::ostream &output, Fixed const &value)
{
    output << value.toFloat();
    return output;
}
