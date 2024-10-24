#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
class Span
{
private:
	std::vector<int> _vec;
	unsigned int _N;
	
public:
	Span();
	Span(unsigned int N);
	Span(Span const &other);
	~Span();
	Span &operator=(Span const &other);
	void addnumber(int n);
	void addnumbers(std::vector<int>::iterator begin,std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	void printall();

};


