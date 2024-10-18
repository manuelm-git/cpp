#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>
class ScalarConverter {
public:
    static void convert(const std::string &value);

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter();

    static void convertchar(const std::string &value);
    static void convertint(const std::string &value);
    static void convertfloat(const std::string &value);
    static void convertdouble(const std::string &value);
    static void convertnan(const std::string &value);
    static void convertinf(const std::string &value);
    static void convertinff(const std::string &value);
    static int checktype(const std::string &value);
};

#endif // SCALARCONVERTER_HPP