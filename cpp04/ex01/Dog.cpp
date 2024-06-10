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
    this->brain = new Brain;

}
Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = dog.getType();
    this->brain = new Brain(*dog.getBrain());
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}
    
Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &dog) 
    {
        delete this->brain;  // delete the old Brain
        this->brain = new Brain(*dog.getBrain());  // create a new Brain
    }
    this->type = dog.getType();
    return *this;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}
