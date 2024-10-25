#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange
{
private:
	std::ifstream _datacsv;
	std::ifstream _inputfile;
public:
    std::map<std::string, float> database;
    BitcoinExchange();
    BitcoinExchange(std::string inputfile);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
	void Parse();
};

#endif