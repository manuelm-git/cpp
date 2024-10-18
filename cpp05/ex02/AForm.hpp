#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
    	const std::string name;
		bool issigned;
		const int gradetosign;
		const int gradetoexecute;
	public:
		AForm(const std::string &name,int gradetosign,int gradetoexecute);
		~AForm();
		const std::string &GetName() const;
		bool getissigned() const;
		int Getgradetosign() const;
		int Getgradetoexecute() const;
		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		AForm &operator=(const AForm &AForm);
		class GradeTooHighException : public std::exception
		{
			public :
				const char *what () const throw();

		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what () const throw();

		};
		class FormIsnotsignedException : public std::exception
		{
			public :
				const char *what () const throw();
				
		};
};

std::ostream &operator<<(std::ostream &output, AForm const &AForm);

#endif