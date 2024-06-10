#include "Animal.hpp"
#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
Dog::Dog(/* args */)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}
Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;

}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
    
Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.getType();
    return *this;
}


