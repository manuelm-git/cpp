#include "AForm.hpp"

AForm::AForm(const std::string &name,int gradetosign,int gradetoexecute) : name(name) , gradetosign(gradetosign) , gradetoexecute(gradetoexecute)
{
	std::cout << "\nForm created\n" << std::endl ;
	if(gradetoexecute < 1 || gradetosign < 1)
		throw(GradeTooHighException());
	else if(gradetoexecute > 150 || gradetosign > 150)
		throw(GradeTooLowException());
	this->issigned = false;
}

AForm::~AForm()
{
	std::cout << "\nForm destroyed\n" << std::endl ;
}
AForm &AForm::operator=(const AForm &other)
{
	this->issigned = other.issigned;	
	return(*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return("Surpassed the highest possible grade");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return("Surpassed the lowest possible grade");
}
const char *AForm::FormIsnotsignedException::what() const throw()
{
	return("Form is not signed!!");
}

bool AForm::getissigned() const
{
	return this->issigned;
}
int AForm::Getgradetoexecute() const
{
	return this->gradetoexecute;
}
int AForm::Getgradetosign() const
{
	return this->gradetosign;
}
const std::string &AForm::GetName() const
{
	return this->name;
}
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.Getgrade() > this->gradetosign)
		throw GradeTooLowException();
	this->issigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if(!issigned)
		throw FormIsnotsignedException();
	if(executor.Getgrade() > Getgradetoexecute())
		throw GradeTooLowException();
	(void)executor;
	std::cout << GetName() << " was executed " << std::endl;
	
}
std::ostream &operator<<(std::ostream &output, AForm const &AForm)
{
	 output << "\n" << AForm.GetName() << ":\n" << \
	"\nSigned Status->" << AForm.getissigned() << \
	"\nGrade to sign-> " << AForm.Getgradetosign() << \
	"\nGrade to execute->" <<	AForm.Getgradetoexecute() << std::endl;    
	return output;
}
