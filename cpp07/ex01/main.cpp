#include <iostream>
#include "iter.hpp"


template <typename T>
void print(const T &x) 
{
    std::cout << x << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int intLength = sizeof(intArray) / sizeof(int);
    std::cout << "Integer array: ";
    iter(intArray, intLength, print<int>);
    std::cout << std::endl;

    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int floatLength = sizeof(floatArray) / sizeof(float);
    std::cout << "Float array: ";
    iter(floatArray, floatLength, print<float>);
    std::cout << std::endl;

    std::string stringArray[] = {"apple", "banana", "cherry", "date", "elderberry" ,"elderberry","elderberry","elderberry"};
    int stringLength = sizeof(stringArray) / sizeof(std::string);
    iter(stringArray, stringLength, print<std::string>);
    std::cout << std::endl;

    return 0;
}