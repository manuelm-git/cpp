#include "Animal.hpp"
#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
Cat::Cat(/* args */)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}