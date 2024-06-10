#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongCat : public Animal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    ~WrongCat();
    void makeSound() const;
};
