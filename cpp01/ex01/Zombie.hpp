#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
    int index;
public:
    Zombie();
    ~Zombie();
    void setname(std::string name,int index);
    void announce();
};


Zombie *zombieHorde( int N, std::string name );
