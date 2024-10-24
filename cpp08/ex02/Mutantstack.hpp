#include <list>
#include <stack>
#include <iostream>

template  <class T>
class Mutantstack : public std::stack
{
private:
	/* data */
public:
	Mutantstack(/* args */);
	~Mutantstack();
};

template<class T> Mutantstack<T>::Mutantstack()
{
}

template<class T> Mutantstack<T>::~Mutantstack()
{
	typename std::stack<T>::container_type::iterator begin;
}
