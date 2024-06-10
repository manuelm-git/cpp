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
    WrongDog(const WrongDog &wrongDog);

    void makeSound() const;
    WrongDog &operator=(const WrongDog &wrongDog);
};
