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
}

Animal::~Animal()
{
}
