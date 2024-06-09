#pragma once

#include <string.h>
#include <iostream>
#include "Claptrap.hpp"

class Fragtrap : public Claptrap
{
private:
public:
    Fragtrap();
    Fragtrap(std::string name);
    ~Fragtrap();
    void attack(std::string const & target);
    void highFivesGuys(void);    
};


