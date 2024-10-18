#pragma once

#include <string>
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


