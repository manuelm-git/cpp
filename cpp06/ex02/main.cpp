#include "Base.hpp"
#include <iostream>

int main() 
{
    const int numTests = 10;

    for (int i = 0; i < numTests; ++i) {
        std::cout << "Test " << i + 1 << ":\n";
        Base* pointer = generate();
        identify(pointer);
        identify(*pointer);
        delete pointer;
        std::cout << std::endl;
    }

    return 0;
}