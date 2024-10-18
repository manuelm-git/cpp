#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Base
{
private:
	/* data */
public:	
	virtual ~Base();
};
void identify(Base* p);
void identify(Base& p);
Base* generate(void);

#endif