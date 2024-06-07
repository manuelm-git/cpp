#include "Phonebook.hpp"
#include "Phonebookutils.hpp"
#include "Contacts.hpp"
contacts::contacts(/* args */)
{
}

contacts::~contacts()
{
    
}
std::string contacts::getfname(void) const
{
    return(this->fname);
}

std::string contacts::getlname(void) const
{
    return(this->lname);
}

std::string contacts::getnick(void) const
{
    return(this->nick);
}
std::string contacts::getnumber(void) const
{
    return(this->number);
}

std::string contacts::getsecret(void) const
{
    return(this->secret);
}
void contacts::setfname(std::string input)
{
    this->fname = input;
}

void contacts::setlname(std::string input)
{
    this->lname = input;
}


void contacts::setnick(std::string input)
{
    this->nick = input;
}

void contacts::setnumber(std::string input)
{
    this->number = input;
}


void contacts::setsecret(std::string input)
{
    this->secret = input;
}