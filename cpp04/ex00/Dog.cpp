#include "Animal.hpp"
#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
Dog::Dog(/* args */)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}