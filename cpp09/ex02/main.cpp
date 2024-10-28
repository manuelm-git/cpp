#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <iomanip> // for std::fixed and std::setprecision
#include "Pmerge.hpp"

void testCanonicalForm() 
{
    Pmerge p1;
    Pmerge p2(p1); // Copy constructor
    Pmerge p3;
    p3 = p1; // Assignment operator
}

int main(int argc, char **argv) 
{
    if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::list<int> lst;

    try 
	{
        for (int i = 1; i < argc; ++i) 
		{
            int num = std::atoi(argv[i]);
            if (num <= 0) throw std::invalid_argument("Non-positive integer");
            vec.push_back(num);
        }
    } 
	catch (const std::exception &e) 
	{
        std::cerr << "Error: Invalid input." << std::endl;
        return 1;
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    Pmerge sorter;

    std::clock_t start = std::clock();
    sorter.fordJohnsonSort(vec, 0, vec.size() - 1);
    std::clock_t end = std::clock();
    double duration = double(end - start) / CLOCKS_PER_SEC;

    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    std::cout << std::fixed;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << duration << " seconds" << std::endl;

    // Test canonical form
    testCanonicalForm();
	std::cout << "Perfect\n";
    return 0;
}
