#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class Dummy {};

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Test generate and identify(Base*)
    Base *p1 = generate();
    identify(p1);
    delete p1;

    // Test identify(Base&)
    Base *p2 = generate();
    identify(*p2);
    delete p2;

    // Test all possible scenarios
    A a;
    B b;
    C c;

    identify(&a);
    identify(&b);
    identify(&c);

    identify(a);
    identify(b);
    identify(c);

    // Test cases where dynamic_cast should fail
    Base *invalidBasePtr = NULL;
    try {
        identify(invalidBasePtr);
    } catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    try {
        Base &invalidBaseRef = *invalidBasePtr;
        identify(invalidBaseRef);
    } catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}