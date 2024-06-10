#include "WrongAnimal.hpp"

std::string WrongAnimal::getType()
{
    return this->type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
WrongAnimal::WrongAnimal(/* args */)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}


WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}