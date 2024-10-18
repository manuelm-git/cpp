#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
    	const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name,int grade);
		~Bureaucrat();
		int Getgrade() const;
		const std::string &GetName() const;
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		void DecrementGrade();
		void IncrementGrade();
		void SignForm(Form &form);
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

std::ostream &operator<<(std::ostream &output, Bureaucrat const &value);

#endif