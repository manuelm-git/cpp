#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("Geneva");
    zombie->announce();
    randomChump("Micheal");
    delete zombie;
    return 0;
}