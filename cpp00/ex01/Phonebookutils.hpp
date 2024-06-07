#ifndef Phonebookutils_hpp

#define Phonebookutils_hpp

#include <string>
#include <iostream>
#include "Contacts.hpp"

std::string fix_width(std::string str,long unsigned int maxsize);
std::string resizestr(int n);
int searchinlist(contacts contact[8]);

#endif