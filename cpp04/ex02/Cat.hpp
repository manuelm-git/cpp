#ifndef CAT_HPP
#define CAT_HPP

#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &Cat);
    void makeSound() const;
    Brain *getBrain() const;
    Cat& operator=(const Cat &Cat);

};

#endif