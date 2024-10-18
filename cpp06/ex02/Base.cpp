#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo>
Base::~Base()
{
}

Base *generate(void)
{
    int num = std::rand() % 3 + 1;
    if(num == 1)
        return(new A());
    else if(num == 2)
        return(new B());
    else if(num == 3)
        return(new C());
    return (NULL);
}

void identify(Base* p)
{
    if(dynamic_cast<A *>(p) != NULL)
        std::cout << "Pointed towards: A" << std::endl; 
    else if(dynamic_cast<B *>(p) != NULL)
        std::cout << "Pointed towards: B" << std::endl; 
    else if(dynamic_cast<C *>(p) != NULL)
        std::cout << "Pointed towards: C" << std::endl; 
    else
        std::cout << "Dynamic cast error" << std::endl;
}

void identify(Base& p)
{
    try 
	{
        A &a = dynamic_cast<A &>(p);
        std::cout << "Base &p points: A" << std::endl;
        (void)a;     
	} 
	catch (const std::exception &e) 
	{}
	try 
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Base &p points: B" << std::endl;
		(void)b; 
	} 
	catch (const std::exception &e)
	{}
	try 
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Base &p points: C" << std::endl;
		(void)c; 
	} 
	catch (const std::exception &e) 
	{}
}