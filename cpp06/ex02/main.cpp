#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{

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

    return 0;
}