#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie initialized" << std::endl;
}

Zombie::~Zombie()
{
        std::cout << "Destroying zombie[" << this->index << "] named :" << name << std::endl;

}
void Zombie::announce()
{
    std::cout << this->name << "["<< this->index <<"]" << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setname(std::string name,int index)
{
    this->name = name;
    this->index = index;
}