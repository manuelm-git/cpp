#ifndef DOG_HPP
#define DOG_HPP
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
    Dog(const Dog &dog);
    ~Dog();
    void makeSound() const;
    Brain *getBrain() const;
    Dog &operator=(const Dog &dog);

};


#endif