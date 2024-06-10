#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
    void Address() const;

    Animal &operator=(const Animal &animal);
};


