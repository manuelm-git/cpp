#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(std::string type);
    ~Animal();
    std::string getType();
    virtual void makeSound() const;

};

Animal::Animal(/* args */)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
