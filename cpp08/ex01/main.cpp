#include "Span.hpp"

int main()
{
	Span vec(5);


	std::cout << "\n\nTesting\n\n" << std::endl;
	try
	{
		vec.addnumber(1);
		vec.addnumber(6);
		vec.addnumber(3);
		vec.addnumber(17);
		vec.addnumber(9);
		vec.addnumber(11);
		vec.printall();
		std::cout << "\nShortest span " << vec.shortestSpan() << std::endl;
		std::cout << "\nLongest span " << vec.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\n\n";
	try
	{
		Span span(300);
		std::vector<int> vecint(10000);
		for (size_t i = 0; i < 10000; i++)
			vecint[i] = i;
		span.addnumbers(vecint.begin(),vecint.end());
		span.printall();
		std::cout << "\nShortest span " << span.shortestSpan() << std::endl;
		std::cout << "\nLongest span " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}