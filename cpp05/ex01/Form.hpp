#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
    	const std::string name;
		bool issigned;
		const int gradetosign;
		const int gradetoexecute;
	public:
		Form(const std::string &name,int gradetosign,int gradetoexecute);
		~Form();
		const std::string &GetName() const;
		bool getissigned() const;
		int Getgradetosign() const;
		int Getgradetoexecute() const;
		void beSigned(const Bureaucrat &bureaucrat);
		Form &operator=(const Form &Form);
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
};

std::ostream &operator<<(std::ostream &output, Form const &Form);

#endif