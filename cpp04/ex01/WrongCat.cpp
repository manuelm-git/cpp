#include "Animal.hpp"
#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
WrongCat::WrongCat(/* args */)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}