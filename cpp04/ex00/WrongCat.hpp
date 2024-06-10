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
    WrongCat(const WrongCat &wrongCat);

    void makeSound() const;
    WrongCat &operator=(const WrongCat &wrongCat);
};
