#include "Animal.hpp"
#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
Cat::Cat(/* args */)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}
Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.getType();
    return *this;
}
