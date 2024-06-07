#include "Phonebook.hpp"
#include "Phonebookutils.hpp"
#include "Contacts.hpp"
Phonebook::Phonebook(void)
{
    this->index = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook is destroyed\n";
}

void Phonebook::search(void)
{
    std::string str;

    str = "";
    if(!searchinlist(this->contact))
    {
        std::cout << "\nContact List is null\n";
        return ;
    }
    while (!std::cin.eof())
    {
        std::cout << "Select Index: ";
        if(std::getline(std::cin,str) && str != "")
        {
            if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->contact[str[0] - 1 - '0'].getfname().size())
                break;
        }
        if(str != "")
            std::cout << "Wrong Index\n";
    }
    if(!std::cin.eof())
        this->printall(this->contact[str[0] - 1 - '0']);
}


void Phonebook::printall(contacts contact)
{
    if(!contact.getfname().size())
        std::cout << "There is no contact to be shown\n";
    std::cout << "-----------------------------------------------\n";
    std::cout << "First Name:" << contact.getfname() << "\n";
    std::cout << "Last Name:" << contact.getlname() << "\n";
    std::cout << "NickName:" << contact.getnick() << "\n";
    std::cout << "Phone Number:" << contact.getnumber() << "\n";
    std::cout << "Darkest Secret:" << contact.getsecret() << "\n";
    std::cout << "-----------------------------------------------\n";

}

void Phonebook::add(void)
{
    std::string input;

    input = "";
    if(this->index > 7)
    {
                std::cout << "-------------------WARNING---------------------\n";
                std::cout << "U are replacing the values of the last contact!\n";
                std::cout << "-----------------------------------------------\n";
    }
    input = "";
    while(input == "" && !std::cin.eof())
    {
        std::cout << "First Name: ";
        if(std::getline(std::cin,input) && input != "")
            this->contact[this->index % 8].setfname(input);
    }
    input = "";
    while(input == "" && !std::cin.eof())
    {
        std::cout << "Enter Last Name: ";
        if(std::getline(std::cin,input) && input != "")
            this->contact[this->index % 8].setlname(input);
    }
    input = "";
    while(input == "" && !std::cin.eof())
    {
        std::cout << "Enter Nick: ";
        if(std::getline(std::cin,input) && input != "")
            this->contact[this->index % 8].setnick(input);
    }
    input = "";
    while(input == "" && !std::cin.eof())
    {
        std::cout << "Enter Phone Number: ";
        if(std::getline(std::cin,input) && input != "")
            this->contact[this->index % 8].setnumber(input);
    }
    input = "";
    while(input == "" && !std::cin.eof())
    {
        std::cout << "Darkest secret: ";
        if(std::getline(std::cin,input) && input != "")
            this->contact[this->index % 8].setsecret(input);
    }
    this->index++;
}