#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name,int grade) :name(name) , grade(grade)
{
	std::cout << "\nBureaucrat created\n" << std::endl ;
	if(this->grade < 1)
		throw(GradeTooHighException());
	if(this->grade > 150)
		throw(GradeTooLowException());
}
Bureaucrat::Bureaucrat() : name("Default") , grade(150)
{
	std::cout << "\nDefault Bureaucrat created\n" << std::endl ;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "\nBureaucrat destroyed\n" << std::endl ;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;	
	return(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Surpassed the highest possible grade");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Surpassed the lowest possible grade");
}
void Bureaucrat::IncrementGrade(void)
{
	if(this->grade == 1)
		throw(GradeTooHighException());
	this->grade--;
}
void Bureaucrat::DecrementGrade(void)
{
	if(this->grade == 150)
		throw(GradeTooLowException());
	this->grade++;
}
int Bureaucrat::Getgrade() const
{
	return this->grade;
}
const std::string &Bureaucrat::GetName() const
{
	return this->name;
}
void Bureaucrat::SignForm(AForm &AForm)
{
	try
	{
		AForm.beSigned(*this);
		std::cout << "\n" << this->GetName() << " signed " << AForm.GetName() << "\n";

	}
	catch(const std::exception& e)
	{
		std::cerr << "\n" << this->GetName() << " couldnt sign " << AForm.GetName() << "\nReason: " << e.what() << '\n';
	}
	
}
void Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " execute " << form.GetName() << std::endl;
    } 
	catch (std::exception &e) 
	{
        std::cout << name << " couldnt execute " << form.GetName() << " because " << e.what() << std::endl;
    }
	
}
std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << "Name: " << bureaucrat.GetName() << '\n' << "Grade: " << bureaucrat.Getgrade();

	return output;
}
