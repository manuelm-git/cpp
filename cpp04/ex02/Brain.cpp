#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}
void Brain::setIdea(std::string idea)
{
    for(int i = 0; i < 100; i++)
    {
        if(idea.empty())
            this->ideas[i] = "I have no idea.";
        else
            this->ideas[i] = "I had " + idea + " in my mind.";
    }
}

const std::string *Brain::getIdea() const
{
    return ideas;
}

Brain& Brain::operator=(const Brain &brain)
{
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = brain.ideas[i];
    }
    return *this;
}
