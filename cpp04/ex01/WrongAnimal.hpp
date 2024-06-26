#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(const WrongAnimal &wrongAnimal);
    ~WrongAnimal();

    std::string getType();
    virtual void makeSound() const;
    WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
};



#endif