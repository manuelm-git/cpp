#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("") 
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) 
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), target(src.target) 
{
	
}

PresidentialPardonForm::~PresidentialPardonForm() 
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) 
{
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

const std::string &PresidentialPardonForm::GetTarget() const 
{
    return this->target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->getissigned()) {
        throw AForm::FormIsnotsignedException(); 	
    }
    if (executor.Getgrade() > this->Getgradetoexecute()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << this->GetTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}