#include "Animal.hpp"

std::string Animal::getType() const
{
    return this->type;
}

Animal::Animal(/* args */)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &animal)
{
    this->type = animal.type;
    return *this;
}

void Animal::Address() const
{
    std::cout << "Address: " << this << std::endl;
}
