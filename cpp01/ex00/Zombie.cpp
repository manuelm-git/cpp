#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Initializing zombie named :" << name << std::endl;

    this->name = name;
}

Zombie::~Zombie()
{
        std::cout << "Destroying zombie named :" << name << std::endl;

}
void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}