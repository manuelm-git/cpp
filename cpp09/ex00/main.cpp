#include "BitcoinExchange.hpp"


int main(int argc,char **argv)
{
	std::ifstream filetoread(argv[1]);
	if(argc != 2)
		return(std::cerr << "Usage: ./btc (file_to_read_from)\n",1);
	if(!filetoread.is_open())
		return(std::cerr << "Error reading file\n",1);
	BitcoinExchange btc(argv[1]);
	return(0);
}