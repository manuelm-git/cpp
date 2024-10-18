#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("") 
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) 
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), target(src.target) 
{
	
}

RobotomyRequestForm::~RobotomyRequestForm() 
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) 
{
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

const std::string &RobotomyRequestForm::GetTarget() const 
{
    return this->target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!this->getissigned()) {
        throw AForm::FormIsnotsignedException(); 	
    }
    if (executor.Getgrade() > this->Getgradetoexecute()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << "***Drilling noises***\n";
	if(rand() % 2)
	{
		std::cout << GetTarget() << " has been robotomized\n" << std::endl;	
	}
	else
	{
		std::cout << "Robotomy failed" << std::endl;
	}
}