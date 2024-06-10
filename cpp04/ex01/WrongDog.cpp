#include "Animal.hpp"
#include "WrongDog.hpp"

void WrongDog::makeSound() const
{
    std::cout << "WrongDog sound" << std::endl;
}
WrongDog::WrongDog(/* args */)
{
    std::cout << "WrongDog constructor called" << std::endl;
    this->type = "WrongDog";
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}