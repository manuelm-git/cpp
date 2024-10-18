// main.cpp
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;
        bob.IncrementGrade();
        std::cout << bob << std::endl;
        bob.IncrementGrade(); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidLow("InvalidLow", 151); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidHigh("InvalidHigh", 0); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("Alice", 149);
        std::cout << alice << std::endl;
        alice.DecrementGrade();
        std::cout << alice << std::endl;
        alice.DecrementGrade(); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}