#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon) : name(name) , weapon(weapon)
{
    std::cout << "Human A" << this->name << " created with " << this->weapon.getType() << " as weapon" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Human A "<< this->name << " destroyed" << std::endl;

}

void HumanA::attack()
{
    if(this->weapon.getType() != "")
        std::cout << name << " attacks with his " << this->weapon.getType() << std::endl;
    else
        std::cout << name << " attacks with his knuckles" << std::endl;
}