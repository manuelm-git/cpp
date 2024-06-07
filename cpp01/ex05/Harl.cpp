
#include "Harl.hpp"

void Harl::DEBUG( void )
{
    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void Harl::INFO( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void Harl::WARNING( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}
void Harl::ERROR( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
    int i = 0;
    void (Harl::*complaints[4])( void ) = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(i < 4)
    {
        if(level == levels[i])
        {
            (this->*complaints[i])();
            break;
        }
        i++;
    }
}

Harl::Harl()
{
    std::cout << "Harl appeared\n";
}

Harl::~Harl()
{
    std::cout << "Harl is gone\n";

}