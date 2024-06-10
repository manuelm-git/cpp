#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongDog : public Animal
{
private:
    /* data */
public:
    WrongDog(/* args */);
    ~WrongDog();
    void makeSound() const;
};
