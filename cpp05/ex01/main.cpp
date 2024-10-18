#include "Bureaucrat.hpp"
#include "form.h"
int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex01" << "\033[0m" << std::endl;

	std::cout << "\033[33m" << std::endl << "Test too high and too low creation" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat Sleeper1("Bernd", 1500);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Sleeper2("Olaf", -10);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\033[33m" << std::endl << "Test increasing" << "\033[0m" << std::endl;
	Bureaucrat bob("Bob", 2);
	std::cout << bob;
	try
	{
		bob.IncrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;
	
	try
	{
	bob.IncrementGrade();
	}
	catch(const std::exception& e)
	{
	std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;



	std::cout << "\033[33m" << std::endl << "Test decreasing" << "\033[0m" << std::endl;
	Bureaucrat tim("Tim", 149);
	std::cout << tim;
	std::cout << "\n" << std::endl;

	try
	{
		tim.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "\nException caught: " << e.what() << std::endl;
	}
	std::cout << tim;
	
	try
	{
	tim.DecrementGrade();
	}
	catch(const std::exception& e)
	{
	std::cerr << "\nException caught: " << e.what() << std::endl;
	}
	std::cout << tim;


	std::cout << "\033[33m" << std::endl << "Test ex01" << "\033[0m" << std::endl;

	Form id_form("ID FORM", 100, 90);
	Bureaucrat mr_slow;
	Bureaucrat mr_id("MR_ID", 100);
	std::cout << id_form;
	std::cout << "\n" << std::endl;
	mr_slow.SignForm(id_form);
	std::cout << "\n" << std::endl;	
	std::cout << id_form;
	std::cout << "\n" << std::endl;
	mr_id.SignForm(id_form);
	std::cout << "\n" << std::endl;

	std::cout << id_form;
	
	return (0);
}