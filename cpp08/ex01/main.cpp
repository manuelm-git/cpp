#include <iostream>
#include <vector>
#include "Span.hpp" // Assuming Span.hpp is the header file for your Span class

int main()
{
    std::cout << "\n\n\n";

    try
    {
        Span span(10000);
        std::vector<int> vecint(10000);
        for (size_t i = 0; i < 10000; i++)
            vecint[i] = i;
        span.addnumbers(vecint.begin(), vecint.end());
        span.printall();
        std::cout << "\nShortest span: " << span.shortestSpan() << std::endl;
        std::cout << "\nLongest span: " << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        Span ola(10000);
        std::vector<int> vecint(10000);
        for (size_t i = 0; i < 10000; i++)
            vecint[i] = i;
        ola.addnumbers(vecint.begin(), vecint.end());
        ola.printall();
        std::cout << "\nShortest span: " << ola.shortestSpan() << std::endl;
        std::cout << "\nLongest span: " << ola.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}