#ifndef BRAIN_HPP
#define BRAIN_HPP
#pragma once
#include <string>
#include <iostream>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(const Brain &brain);
    ~Brain();
    void setIdea(std::string idea);
    const std::string *getIdea() const;
    Brain& operator=(const Brain &brain);
};

#endif