#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = cat.getType();
    this->brain = new Brain(*cat.getBrain());
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &cat) 
    {
        delete this->brain;  // delete the old Brain
        this->brain = new Brain(*cat.getBrain());  // create a new Brain
    }
    this->type = cat.getType();
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Brain *Cat::getBrain() const
{
    return this->brain;
}