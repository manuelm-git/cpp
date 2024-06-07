#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    std::cout << "Human " << this->name << " created without " << " weapon" << std::endl;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "Human B destroyed" << std::endl;

}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack()
{
    if(this->weapon && this->weapon->getType() != "")
        std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with his knuckles" << std::endl;
}