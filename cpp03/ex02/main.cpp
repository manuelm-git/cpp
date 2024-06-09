
#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
int main()
{
    std::cout << "-------------------------------------------------" <<std::endl;
    std::cout << "\t\tClaptrap\n" <<std::endl;
    Claptrap claptrap("Knight");
    std::cout << std::endl;
    claptrap.attack("target");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    std::cout << std::endl;

    std::cout << "-------------------------------------------------" <<std::endl;
    std::cout << "\t\tScavtrap\n" <<std::endl;

    Scavtrap scavtrap("Archer");
    std::cout << std::endl;
    scavtrap.attack("target");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    std::cout << std::endl;
    std::cout << "-------------------------------------------------" <<std::endl;

    std::cout << "\t\tFragtrap\n" <<std::endl;

    Fragtrap fragtrap("Mage");
    std::cout << std::endl;
    fragtrap.attack("target");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    std::cout << std::endl;
    fragtrap.highFivesGuys();
    std::cout << std::endl;

    return 0;
}