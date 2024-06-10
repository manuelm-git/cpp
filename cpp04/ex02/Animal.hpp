#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
    virtual void makeSound() const = 0;
    void Address() const;

    Animal &operator=(const Animal &animal);
};


#endif