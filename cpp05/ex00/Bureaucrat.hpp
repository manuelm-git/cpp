#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
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