#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    ~WrongAnimal();
    std::string getType();
    virtual void makeSound() const = 0;
};


