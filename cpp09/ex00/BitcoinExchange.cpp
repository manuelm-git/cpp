#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _datacsv("data.csv") , database(std::map<std::string, float>())
{

}
BitcoinExchange::BitcoinExchange(std::string inputfile) :_inputfile(inputfile) , _datacsv("data.csv") , database(std::map<std::string, float>())
{
	if(!_inputfile.is_open())
	{
		throw	ThrowException("Could not open input file");
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : database(other.database)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        database = other.database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    if (_datacsv.is_open())
    {
        _datacsv.close();
    }
	if(_inputfile.is_open())
		_inputfile.close();
}

void BitcoinExchange::Parse()
{

}
class ThrowException : public std::exception
{
private:
    std::string message;

public:
    ThrowException(const std::string &msg) : message(msg){}
    virtual const char *what() const throw(){return message.c_str();}
};