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
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}
