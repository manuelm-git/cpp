#include "Scavtrap.hpp"

Scavtrap::Scavtrap(/* args */)
{
    std::cout << "Scavtrap default constructor called" << std::endl;
    this->name = "default";
    this->hitpoints = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}
Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
    std::cout << "Scavtrap " << this->name << " constructor called" << std::endl;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->guardmode = 0;
}
Scavtrap::~Scavtrap()
{
    std::cout << "Scavtrap " << this->name << " destructor called" << std::endl;
}
void Scavtrap::attack(std::string const & target)
{
    if(this->hitpoints <= 0)
    {
        std::cout << "Scavtrap " << this->name << " is dead" << std::endl;
        return;
    }
    if(this->energy_points >= 0)
    {
        std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Scavtrap " << this->name << " is out of energy" << std::endl;
}

void Scavtrap::guardGate()
{
    std::cout << "Scavtrap " << this->name << " has entered in Gate keeper mode" << std::endl;
    this->guardmode = 1;
}