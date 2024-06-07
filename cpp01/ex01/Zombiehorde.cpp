#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name )
{
    int i = 0;
    Zombie *zombie = new Zombie[N];
    if(N < 0)
    {
        std::cout << "Error: N is negative" << std::endl;
        return NULL;
    }
    while (i < N)
    {
        zombie[i].setname(name, i);
        i++;
    }
    
    return zombie;
}