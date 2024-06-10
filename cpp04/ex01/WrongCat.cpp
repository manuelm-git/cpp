#include "Animal.hpp"
#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow" << std::endl;
}
WrongCat::WrongCat(/* args */)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &wrongCat) : Animal(wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
    if(this != &wrongCat)
        this->type = wrongCat.type; 
    return *this;
}
