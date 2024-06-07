#include "Phonebook.hpp"
#include "Phonebookutils.hpp"
#include "Contacts.hpp"
int main()
{
    Phonebook phone;
    std::string str;

    while(str != "EXIT")
    {
        str = "";
        std::cout << "Enter command :";
        std::getline(std::cin,str);
        if(str == "ADD")
            phone.add();
        if(str == "SEARCH")
            phone.search();
        if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
    }
    return(0);
}