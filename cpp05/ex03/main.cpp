#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    AForm *form1 = NULL;
    AForm *form2 = NULL;
    AForm *form3 = NULL;

    try
    {
        srand(time(0));
        Bureaucrat bureaucrat("Emperor", 45);
        Intern intern;

        form1 = intern.Makeform("robotomy request", "Bender");
        form2 = intern.Makeform("shrubbery creation", "Christmas");
        form3 = intern.Makeform("presidential pardon", "Fry");

        if (form1)
        {
            std::cout << *form1 << std::endl;
            form1->beSigned(bureaucrat);
            std::cout << *form1 << std::endl;
            form1->execute(bureaucrat);
        }

        if (form2)
        {
            std::cout << *form2 << std::endl;
            form2->beSigned(bureaucrat);
            std::cout << *form2 << std::endl;
            form2->execute(bureaucrat);
        }

        if (form3)
        {
            std::cout << *form3 << std::endl;
            form3->beSigned(bureaucrat);
            std::cout << *form3 << std::endl;
            form3->execute(bureaucrat);
        }
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

    delete form1;
    delete form2;
    delete form3;

    return 0;
}