#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
}
Base *generate(void)
{
	int num = rand() % 3 + 1;
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
	if(dynamic_cast<A *>(&p) != NULL)
		std::cout << "Base &p points: A" << std::endl; 
	else if(dynamic_cast<B *>(&p) != NULL)
		std::cout << "Base &p points: B" << std::endl; 
	else if(dynamic_cast<C *>(&p) != NULL)
		std::cout << "Base &p points: C" << std::endl; 
	else
		std::cout << "Base &p doesnt point anywhere" << std::endl;
}