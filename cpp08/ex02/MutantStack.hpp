#include <stack>
#include <iostream>
#include <algorithm>

template  <typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	MutantStack(/* args */);
	virtual ~MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack &operator=(MutantStack const &other);
    typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();

};


template<typename T> 
MutantStack<T>::MutantStack()
{
}

template<typename T> 
MutantStack<T>::~MutantStack()
{

}
template<class T> 
MutantStack<T>::MutantStack(const MutantStack<T> &other)
{
	
}
template<class T> 
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

template <class T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}
template <class T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return this->c.end();
}
