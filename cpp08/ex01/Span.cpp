#include "Span.hpp"
#include "limits"
Span::Span(/* args */)
{

}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Size : " << _vec.size();
    std::cout << "\nCapacity : " << _vec.capacity();
    std::cout << "\nMax_Size : " << _vec.max_size();
 
}
Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{
}
Span &Span::operator=(const Span &other)
{
	_N = other._N;
	_vec = other._vec;
	return *this;
}

void Span::addnumber(int number)
{
	if(_vec.size() < _N)
		_vec.push_back(number);
	else
	{
		std::cerr << "\nError: Couldnt add " << number << "\nReason:";
		throw std::runtime_error("Vector surpassed the limit set");
	}

}
int Span::shortestSpan()
{
	if(_vec.size() < 2)
		throw std::runtime_error("\nNot enough values to calculate shortest span\n");
	
	std::vector<int>sortedvector = _vec;
	std::sort(sortedvector.begin(),sortedvector.end());
	int min = std::numeric_limits<int>::max();
	for(unsigned int i = 1; i < sortedvector.size(); ++i)
	{
		if(sortedvector[i] - sortedvector[i - 1] < min)
			min = sortedvector[i] - sortedvector[i - 1];
	}
	return(min);
}
int Span::longestSpan()
{
	if(_vec.size() < 2)
		throw std::runtime_error("\nNot enough values to calculate longest span\n");
	else
		return (*std::max_element(_vec.begin(),_vec.end()) - *std::min_element(_vec.begin(),_vec.end()));
		
}
void Span::addnumbers(std::vector<int>::iterator begin,std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator it = begin; it != end; it++)
	{
		addnumber(*it);
	}
}

void Span::printall()
{
	
    if (_vec.empty() == true)
    {
	    std::cout << "\nVector is empty\n";
	}
	std::cout << "\nValues:\n[";
	for(std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
}