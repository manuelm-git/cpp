#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("") 
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), target(src.target) 
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) 
{
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

const std::string &ShrubberyCreationForm::GetTarget() const 
{
    return this->target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const 
{
	std::ofstream file;
	if (!this->getissigned()) {
        throw AForm::FormIsnotsignedException(); 	
    }
    if (executor.Getgrade() > this->Getgradetoexecute()) {
        throw AForm::GradeTooLowException();
    }
	file.open((GetTarget() + "Shrubbery").c_str(), std::ofstream::out);
	std::cout << "Tree written to " << GetTarget() << std::endl;
	
	file << "	            .        +          .      .          . " << std::endl;
	file << "     .            _        .                    ." << std::endl;
	file << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	file << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	file << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	file << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
	file << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	file << ".           \\:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
	file << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
	file << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\"--\"---._/`7" << std::endl;
	file << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
	file << "              \\:  `  X` _| _,\\/\'   .-'" << std::endl;
	file << " .               \":._:`\\____  /:'  /      .           ." << std::endl;
	file << "                    \\::.  :\\/:'  /              +" << std::endl;
	file << "   .                 `.:.  /:'  }      ." << std::endl;
	file << "           .           ):_(:;   \\           ." << std::endl;
	file << "                      /:. _/ ,  |" << std::endl;
	file << "                   . (|::.     ,`                  ." << std::endl;
	file << "     .                |::.    {\"                   ." << std::endl;
	file << "                      |::.:\\  \\ `." << std::endl;
	file << "                      |:::(\\    |" << std::endl;
	file << "              O       |:::/{ }  |                  (o)" << std::endl;
	file << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	file << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	file << "       ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << std::endl;

	file.close();
}