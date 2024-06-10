#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat(/* args */);
    ~Cat();
    void makeSound() const;
    Brain *getBrain() const;
};
