#include "Animal.hpp"
#include "WrongDog.hpp"

void WrongDog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
WrongDog::WrongDog(/* args */)
{
    std::cout << "WrongDog constructor called" << std::endl;
    this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &wrongDog) : Animal(wrongDog)
{
    std::cout << "WrongDog copy constructor called" << std::endl;
    *this = wrongDog;
}
WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &wrongDog)
{
    if(this != &wrongDog)
        this->type = wrongDog.type; 
    return *this;
}
