#include "Claptrap.hpp"

int main()
{
    Claptrap claptrap("Knight");
    claptrap.takeDamage(100);
    claptrap.beRepaired(90);
    claptrap.attack("target");
    return 0;
}