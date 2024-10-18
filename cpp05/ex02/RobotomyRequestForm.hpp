#pragma once
#include <cstdlib>
#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	const std::string &GetTarget() const;
	void execute(const Bureaucrat &executor) const;
};

