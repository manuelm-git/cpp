#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	const std::string &GetTarget() const;
	void execute(const Bureaucrat &executor) const;
};

#endif