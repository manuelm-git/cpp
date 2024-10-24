#include <iostream>
#include <fstream>
#include <string.h>

class BitcoinExchange
{
private:
	std::string _date;
	int value; 
public:
	BitcoinExchange(/* args */);
	~BitcoinExchange();
	std::string Getdate();
	int Getvalue();
	
};

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::~BitcoinExchange()
{
}


