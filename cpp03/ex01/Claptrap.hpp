#pragma once
#include <string>
#include <iostream>

class Claptrap
{
protected:
    std::string name;
    int hitpoints;
    int energy_points;
    int attack_damage;
    int is_dead;

public:
    Claptrap();
    Claptrap(std::string name);
    ~Claptrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


