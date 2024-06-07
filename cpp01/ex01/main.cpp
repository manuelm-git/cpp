#include "Zombie.hpp"

int main()
{
    std::string name;
    int amount;
    int i = 0;

    std::cout << "ZombieHorde name: ";
    std::cin >> name;
    std::cout << "Amount of Zombies: ";
    std::cin >> amount;

    Zombie *zombie = zombieHorde(amount, name);
    while(i < amount)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return 0;
}