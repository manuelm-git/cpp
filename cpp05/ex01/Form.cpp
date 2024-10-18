#include "Form.hpp"

Form::Form(const std::string &name,int gradetosign,int gradetoexecute) : name(name) , gradetosign(gradetosign) , gradetoexecute(gradetoexecute)
{
	std::cout << "\nForm created\n" << std::endl ;
	if(gradetoexecute < 1 || gradetosign < 1)
		throw(GradeTooHighException());
	else if(gradetoexecute > 150 || gradetosign > 150)
		throw(GradeTooLowException());
	this->issigned = false;
}

Form::~Form()
{
	std::cout << "\nForm destroyed\n" << std::endl;
}
Form &Form::operator=(const Form &other)
{
	this->issigned = other.issigned;	
	return(*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("Surpassed the highest possible grade");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return("Surpassed the lowest possible grade");
}

bool Form::getissigned() const
{
	return this->issigned;
}
int Form::Getgradetoexecute() const
{
	return this->gradetoexecute;
}
int Form::Getgradetosign() const
{
	return this->gradetosign;
}
const std::string &Form::GetName() const
{
	return this->name;
}
void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.Getgrade() > this->gradetosign)
		throw GradeTooLowException();
	this->issigned = true;
}
std::ostream &operator<<(std::ostream &output, Form const &Form)
{
	 output << "\n" << Form.GetName() << ":\n" << \
	"\nSigned Status->" << Form.getissigned() << \
	"\nGrade to sign-> " << Form.Getgradetosign() << \
	"\nGrade to execute->" <<	Form.Getgradetoexecute() << std::endl;    
	return output;
}
