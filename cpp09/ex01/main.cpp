#include "RPN.hpp"

int main(int argc,char **argv)
{
	try
	{
		RPN stck;
		if(argc != 2)
			throw Throwmyexception("./RPN (str with integers or operators +-*/)");
		stck.readstr(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return(0);
}