#include "Fragtrap.hpp"

Fragtrap::Fragtrap(/* args */)
{
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->name = "default";
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}
Fragtrap::Fragtrap(std::string name)
{
    std::cout << "Fragtrap " << this->name << " constructor called" << std::endl;
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    this->name = name;
}
Fragtrap::~Fragtrap()
{
    std::cout << "Fragtrap " << this->name << " destructor called" << std::endl;
}
void Fragtrap::attack(std::string const & target)
{
    if(this->hitpoints <= 0)
    {
        std::cout << "Fragtrap " << this->name << " is dead" << std::endl;
        return;
    }
    if(this->energy_points >= 0)
    {
        std::cout << "Fragtrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Fragtrap " << this->name << " is out of energy" << std::endl;
}

void Fragtrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << this->name << " really wants to high five someone" << std::endl;
}
