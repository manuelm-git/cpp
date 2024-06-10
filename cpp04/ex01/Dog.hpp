#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog(/* args */);
    ~Dog();
    void makeSound() const;
    Brain *getBrain() const;

};


