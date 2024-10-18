#include <iostream>
#include "iter.hpp"

void printInt(int x) 
{
    std::cout << x << " ";
}

void printFloat(float x) 
{
    std::cout << x << " ";
}

void printString(const std::string &x) 
{
    std::cout << x << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int intLength = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Integer array: ";
    iter(intArray, intLength, printInt);
    std::cout << std::endl;

    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int floatLength = sizeof(floatArray) / sizeof(floatArray[0]);
    std::cout << "Float array: ";
    iter(floatArray, floatLength, printFloat);
    std::cout << std::endl;

    std::string stringArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int stringLength = sizeof(stringArray) / sizeof(stringArray[0]);
	std::cout << stringLength << std::endl;
    iter(stringArray, stringLength, printString);
    std::cout << std::endl;

    return 0;
}