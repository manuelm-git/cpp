
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Miguel;
	std::cout << Miguel << std::endl;
	// std::cout << "Name: " << Miguel.GetName() << '\n' << "Grade: " << Miguel.Getgrade();
	
	std::cout << "\n\n========Testing========\n\n" << std::endl;
	try
	{
		Bureaucrat Gah("Gah",3000);
		std::cout << Gah << std::endl;
	}
	catch(const std::exception& e)
	{	
		std::cout << "\nCannot create Gah\n" << std::endl;
		std::cout << "Reason: " << e.what() << '\n';
	}
	std::cout << "\n\n========TestingNegative========\n\n" << std::endl;
	try
	{
		Bureaucrat Biz("Biz",-2);
		std::cout << Biz << std::endl;
	}
	catch(const std::exception& e)
	{	
		std::cout << "\nCannot create Biz\n" << std::endl;
		std::cout << "Reason: " << e.what() << '\n';
	}
	std::cout << "\n\n========TestingLimits========\n\n" << std::endl;

	try
	{
		Miguel.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "Cannot decrement grade\n" << std::endl;
		std::cout << "Reason: " << e.what() << '\n';
	}
	std::cout << Miguel << std::endl;
	std::cout << "\n\n=======================\n\n" << std::endl;
	return(0);
}
