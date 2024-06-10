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
    Cat(const Cat &cat);
    ~Cat();
    
    void makeSound() const;
    Cat &operator=(const Cat &cat);

};
