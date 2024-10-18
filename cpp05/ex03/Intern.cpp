#include "Intern.hpp"

enum Formstype 
{
	shrubbery_creation,
	robotomy_request,
	presidential_pardon,
	error
};
const std::string formNames[] = 
{
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

Intern::Intern(/* args */)
{
	std::cout << "Intern created" << std::endl;
}
Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor created" << std::endl;
	*this = other;
}
Intern::~Intern()
{
	std::cout << "Intern deleted" << std::endl;

}
Intern & Intern::operator=(const Intern &other)
{
	(void)other;
	return(*this);
}
AForm *Intern::Makeform(const std::string &FormName,const std::string &target) const
{
	int i = 0;

	while(i < 3)
	{
		if(FormName == formNames[i])
			break;
		i++;
	}
	switch (i)
	{
	case shrubbery_creation:
		std::cout << "Intern creates " << formNames[i] << std::endl;
		return new ShrubberyCreationForm(target);
	case robotomy_request:
		std::cout << "Intern creates " << formNames[i] << std::endl;
		return new RobotomyRequestForm(target);
	case presidential_pardon:
		std::cout << "Intern creates " << formNames[i] << std::endl;
		return new PresidentialPardonForm(target);
	default:
		std::cout << "Intern cannot create " << FormName << " because it doesnt exits" << std::endl;
		return NULL;
	}
}