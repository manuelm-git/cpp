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
WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : type(wrongAnimal.type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
    if(this != &wrongAnimal)
        this->type = wrongAnimal.type; 
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}