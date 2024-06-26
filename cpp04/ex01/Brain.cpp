#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called" << std::endl;
    this->setIdea("");
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
    if(idea.empty())
        idea = "I have no idea.";
    for(int i = 0; i < 100; i++)
    {   
        ideas[i] = idea;
    }
}

const std::string *Brain::getIdea() const
{
    return ideas;
}

Brain& Brain::operator=(const Brain &brain)
{
    if(this != &brain)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return *this;
}
