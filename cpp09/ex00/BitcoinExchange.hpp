#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdlib.h>
#include <string.h>
#include <cstdlib> // for atof
#include <limits>  // for numeric_limits
#include <sstream> // for stringstream
#include <iomanip>      // std::setprecision
class Throwmyexception : public std::exception 
{
	private:
		std::string msg;
	public:
		Throwmyexception(const std::string& message) : msg(message) {}
		virtual ~Throwmyexception() throw() {}
		virtual const char* what() const throw() {
			return msg.c_str();
		}
};

class BitcoinExchange
{
private:
	std::ifstream _inputfile;
    std::ifstream _datacsv;
    std::map<std::string, float> database;
public:
    BitcoinExchange();
    BitcoinExchange(std::string inputfile);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
    void Parsefile(std::ifstream& _inputfile);
    void Parsefileinput(std::string line);
	int	isValidDate(const std::string &date);
	int isValidNumber(const std::string &number);
	std::string removeAllWhitespace(const std::string &str);
	std::string findClosestDate(const std::string &date);
	void ParseDatabase();
};


#endif