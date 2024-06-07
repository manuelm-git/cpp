#include "Phonebook.hpp"
#include "Phonebookutils.hpp"
#include "Contacts.hpp"

std::string fix_width(std::string str,long unsigned int maxsize)
{
    if(str.size() > maxsize)
    {
        str.resize(maxsize - 1);
        str += ".";
    }
    return(str);
}

std::string resizestr(int n)
{
    std::string str;

    while (n--)
    {
        str.append(" ");
    }
    return(str);
}

int searchinlist(contacts contact[8])
{
    std::string value;
    int i;
    char cindex;

    value = "";
    i = 0;
    cindex = '0';
    std::cout << "____________________________________________\n";
    std::cout << "|     Index|First Name| Last Name|Nick Name |\n";
    std::cout << "--------------------------------------------\n";

    while (++cindex <= '8')
    {
        if (contact[cindex - 1 - '0'].getfname().size() && ++i)
        {

            value = cindex;
            std::cout << "|" << resizestr(10 - value.size()) << value;
            value = fix_width(contact[cindex - 1 - '0'].getfname(),10);
            std::replace(value.begin(), value.end(), '\t', ' ');
            std::cout << "|" << resizestr(10 - value.size()) << value;
            value = fix_width(contact[cindex - 1 - '0'].getlname(),10);
            std::replace(value.begin(), value.end(), '\t', ' ');
            std::cout << "|" << resizestr(10 - value.size()) << value;
            value = fix_width(contact[cindex - 1 - '0'].getnick(),10);
            std::replace(value.begin(), value.end(), '\t', ' ');
            std::cout << "|" << resizestr(10 - value.size()) << value << "|" << "\n";
        }
    }
    std::cout << "--------------------------------------------\n";
    return (i);
}