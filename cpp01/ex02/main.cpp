#include <string>
#include <iostream>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strptr = &str;
    std::string &strref = str;

    std::cout << "Memomy of String: " << &str << std::endl;
    std::cout << "Memomy of Pointer: " << strptr << std::endl;
    std::cout << "Memomy of Reference: " << &strref << std::endl;
    std::cout << "Value of String: " << str << std::endl;
    std::cout << "Value of Pointer: " << *strptr << std::endl;
    std::cout << "Value of Reference: " << strref << std::endl;
}