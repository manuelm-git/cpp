#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
  try
  {
    Bureaucrat jhonny("jhonny", 1);
    ShrubberyCreationForm shrubberyForm("house");
    RobotomyRequestForm robotomyForm("target");
    PresidentialPardonForm pardonForm("arsonist");

    jhonny.SignForm(shrubberyForm);
    jhonny.SignForm(robotomyForm);
    jhonny.SignForm(pardonForm);

    jhonny.executeForm(shrubberyForm);
    jhonny.executeForm(robotomyForm);
    jhonny.executeForm(pardonForm);
  }
  catch (Bureaucrat::GradeTooHighException &exception)
  {
    std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooLowException &exception)
  {
    std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
  } 
  catch (std::exception &exception)
  {
    std::cerr << "Caught exception: " << exception.what() << std::endl;
  }
}