#ifndef Phonebook_hpp

#define Phonebook_hpp

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include "Contacts.hpp"

class Phonebook
{
    private:
        int index;
        contacts contact[8];
    public:
        void add(void);
        void search(void);
        void printall(contacts contact);
        Phonebook(void);
        ~Phonebook();
};

#endif