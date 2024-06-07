#ifndef Contacts_hpp

#define Contacts_hpp

#include <string>
#include <iostream>

class contacts
{
private:
    std::string fname;
    std::string lname;
    std::string nick;
    std::string number;
    std::string secret;
    
public:
    contacts(/* args */);
    ~contacts();
    std::string getfname(void) const;
    std::string getlname(void) const;
    std::string getnick(void) const;
    std::string getnumber(void) const;
    std::string getsecret(void) const;
    void setfname(std::string input);
    void setlname(std::string input);
    void setnick(std::string input);
    void setnumber(std::string input);
    void setsecret(std::string input);
};




#endif