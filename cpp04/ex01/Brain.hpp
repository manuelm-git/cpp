#include "Animal.cpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
    void setIdea(std::string idea);
    const std::string *getIdea() const;
};

