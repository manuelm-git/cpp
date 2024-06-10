#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
void Brain::setIdea(std::string idea)
{
    for(int i = 0;i <= 100;i++)
    {
        this->ideas[i] = idea;
    }
}
const std::string *Brain::getIdea() const
{
    return ideas;
}
