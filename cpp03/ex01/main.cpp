
#include "Claptrap.hpp"
#include "Scavtrap.hpp"
int main()
{
    Claptrap claptrap("Knight");
    std::cout << std::endl;
    claptrap.attack("target");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    std::cout << std::endl;
    Scavtrap scavtrap("Archer");
    std::cout << std::endl;
    scavtrap.attack("target");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    std::cout << std::endl;


    return 0;
}