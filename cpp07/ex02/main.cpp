#include "Array.hpp"

int main()
{
    // Test default constructor
    Array<int> defaultArray;
    std::cout << "Default array size: " << defaultArray.size() << std::endl;

    // Test parameterized constructor
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
	{
        intArray[i] = i * 10;
    }
    std::cout << "Integer array: ";
    for (unsigned int i = 0; i < intArray.size(); ++i)
	{
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Array<int> copiedArray(intArray);
    std::cout << "Copied array: ";
    for (unsigned int i = 0; i < copiedArray.size(); ++i)
	{
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Assigned array: ";
    for (unsigned int i = 0; i < assignedArray.size(); ++i)
	{
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}