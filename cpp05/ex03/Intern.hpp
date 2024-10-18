#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &other);
	AForm *Makeform(const std::string &FormName,const std::string &target) const;
};

