#pragma once

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	const std::string &GetTarget() const;
	void execute(const Bureaucrat &executor) const;
};

