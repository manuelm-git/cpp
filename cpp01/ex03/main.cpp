#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
int main()
{
    Weapon weapon1("knife");
    Weapon weapon2("TV remote");
    Weapon weapon3("hammer");
    Weapon nothing("");

    HumanA humanA1("John Travolta", weapon1);
    HumanA humanA2("Batman", nothing);
    HumanB humanB("Samuel L. Jackson");

    humanA1.attack();
    humanA2.attack();
    std::cout << "\n\n";
    humanB.attack();
    humanB.setWeapon(weapon2);
    humanB.attack();
    weapon2.setType("gun");
    humanB.attack();
    
}