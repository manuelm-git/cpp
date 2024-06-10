#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    ~Cat();
};

Cat::Cat(/* args */)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
