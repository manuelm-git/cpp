#include "Animal.hpp"

std::string Animal::getType() const
{
    return this->type;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
Animal::Animal(/* args */)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}
Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
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
