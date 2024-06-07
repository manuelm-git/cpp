#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name )
{
    int i = 0;
    if(N < 0)
    {
        std::cout << "Error: N is negative" << std::endl;
        return NULL;
    }
    Zombie *zombie = new Zombie[N];
    while (i < N)
    {
        zombie[i].setname(name, i);
        i++;
    }
    
    return zombie;
}