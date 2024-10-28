#include "BitcoinExchange.hpp"
#include <cstdlib> // for atof
#include <limits>  // for numeric_limits
#include <sstream> // for stringstream

BitcoinExchange::BitcoinExchange(): _datacsv("data.csv") , database(std::map<std::string, float>())
{
    ParseDatabase();
}

BitcoinExchange::BitcoinExchange(std::string inputfile) :_inputfile(inputfile.c_str()) , _datacsv("data.csv") , database(std::map<std::string, float>())
{
    if(!_inputfile.is_open())
    {
        throw Throwmyexception("Could not open input file");
    }
    ParseDatabase();
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

void BitcoinExchange::ParseDatabase()
{
    std::string line;
    while (getline(_datacsv, line))
    {
        size_t pos = line.find(',');
        if (pos != std::string::npos)
        {
            std::string key = line.substr(0, pos);
            std::string valueStr = line.substr(pos + 1);
            float value = atof(valueStr.c_str());
            database[key] = value;
        }
    }
}

int BitcoinExchange::isValidDate(const std::string& date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return 0;

    // int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12 || day < 1 || day > 31)
        return 0;

    // 30 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return 0;

    // February
    // if (month == 2)
    // {
    //     bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    //     if (day > 29 || (day == 29 && !isLeapYear))
    //         return false;
    // }

    return 1;
}

int BitcoinExchange::isValidNumber(const std::string& number)
{
    char* end;
    double value = std::strtod(number.c_str(), &end);

    if (*end != '\0' || value > 1000 || value < -1)
        return 1;

    return 0;
}

std::string BitcoinExchange::findClosestDate(const std::string& date)
{
    std::map<std::string, float>::iterator it = database.lower_bound(date);
    if (it == database.end())
        return (--it)->first;
    if (it == database.begin())
        return it->first;
    if (it->first == date)
        return it->first;
    std::map<std::string, float>::iterator prev = it;
    --prev;
	if (date < it->first && date > prev->first)
		return prev->first;
	else 
		return it->first;
}
std::string BitcoinExchange::removeAllWhitespace(const std::string &str)
{
    std::string result;
    for(size_t i = 0; i < str.size(); i++)
	{
        if (!std::isspace(str[i])) {
            result += str[i];
        }
    }
    return result;
}
void BitcoinExchange::Parsefileinput(std::string line)
{
    size_t pos = line.find('|');
    if (pos != std::string::npos)
    {
        std::string first = line.substr(0, pos);
        std::string second = line.substr(pos + 1);

        // Trim whitespace
        first = removeAllWhitespace(first);
        second = removeAllWhitespace(second);

        if (!isValidDate(first))
        {
            std::cout << "Invalid date: " << first << std::endl;
            return;
        }

        if (isValidNumber(second))
        {
            std::cout << "Invalid number: " << second << std::endl;
            return;
        }

        float value = atof(second.c_str());
        std::string closestDate = findClosestDate(first);
        float closestValue = database[closestDate];
        std::cout << "Closest date (" << first << ") " << closestDate << "\t"<< value <<" * " << closestValue << " = " << (value * closestValue) << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << "No | found in line: " << line << std::endl; // Debug statement
    }
}

void BitcoinExchange::Parsefile(std::ifstream& _inputfile)
{
    std::string line;
    
    // Skip the first line
    getline(_inputfile, line);
    if (line != "date | value") 
    {
        Throwmyexception("Failed to read the first line");
    }
    
    while (getline(_inputfile, line))
    {
        // std::cout << "Read line: " << line << std::endl; // Debug statement
        if (line.length() < 1)
            Throwmyexception("Empty line");
        else
            Parsefileinput(line);
    }

    // Print the database for verification
    // std::cout << "Entries:" << std::endl;
    // for (std::map<std::string, float>::iterator it = database.begin(); it != database.end(); ++it) 
    // {
    //     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    // }
}