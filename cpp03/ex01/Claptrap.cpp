#include "Claptrap.hpp"

Claptrap::Claptrap(/* args */)
{
    std::cout << "Claptrap default constructor called" << std::endl;
    this->name = "default";
    this->hitpoints = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    this->is_dead = 0;
}
Claptrap::Claptrap(std::string name)
{
    std::cout << "Claptrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitpoints = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    this->is_dead = 0;
}
Claptrap::~Claptrap()
{
    std::cout << "Claptrap " << this->name << " destructor called" << std::endl;
}
void Claptrap::attack(std::string const & target)
{
    if(this->hitpoints <= 0 && this->is_dead == 1)
    {
        std::cout << "Claptrap " << this->name << " can't attack because he is dead" << std::endl;
        this->is_dead = 1;
        return;
    }
    if(this->energy_points >= 0)
    {
        std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Claptrap " << this->name << " is out of energy" << std::endl;
}
void Claptrap::takeDamage(unsigned int amount)
{
    if(this->hitpoints > 0)
    {
        std::cout << "Claptrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
        this->hitpoints -= amount;
    }
    else if(this->is_dead == 0)
    {
        std::cout << "Claptrap " << this->name << " is dead B" << std::endl;
        this->is_dead = 1;
    }
}
void Claptrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0)
    {
        if(this->hitpoints >= 0)
        {
            std::cout << "Claptrap " << this->name << " repaired " << amount << " points of health!" << std::endl;
            this->hitpoints += amount;
            this->energy_points--;
        }
        else if(this->is_dead == 0)
        {
            std::cout << "Claptrap " << this->name << " is dead C" << std::endl;
            this->is_dead = 1;
        }
    }
    else
        std::cout << "Claptrap " << this->name << " has no energy" << std::endl;
}