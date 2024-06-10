#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    Dog(const Dog &dog);
    ~Dog();

    Dog &operator=(const Dog &dog);
    void makeSound() const;
};


