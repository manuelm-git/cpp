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
    void makeSound() const;
};
