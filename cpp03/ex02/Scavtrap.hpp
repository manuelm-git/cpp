#pragma once

#include <string.h>
#include <iostream>
#include "Claptrap.hpp"

class Scavtrap : public Claptrap
{
private:
    int guardmode;
public:
    Scavtrap();
    Scavtrap(std::string name);
    ~Scavtrap();
    void attack(std::string const & target);
    void guardGate();
    
};


