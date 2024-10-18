#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>

#define type_char 1
#define type_int 2
#define type_float 3
#define type_double 4
#define type_error 5
#define type_nan 6
#define type_inf 7
#define type_inff 8

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convertchar(const std::string &value) {
    char c = value[0];
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertint(const std::string &value) {
    char* end;
    long long i = std::strtoll(value.c_str(), &end, 10);
    if (*end != '\0' || i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max()) {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: Impossible" << std::endl;
        return;
    }
    if (std::isprint(static_cast<unsigned char>(i)))
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (i >= -std::numeric_limits<float>::max() && i <= std::numeric_limits<float>::max())
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    else
        std::cout << "float: Impossible" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void ScalarConverter::convertfloat(const std::string &value) {
    char* end;
    float f = std::strtof(value.c_str(), &end);
    if (*end != 'f' || *(end + 1) != '\0') {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: Impossible" << std::endl;
        return;
    }
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convertdouble(const std::string &value) {
    char* end;
    double d = std::strtod(value.c_str(), &end);
    if (*end != '\0') {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: Impossible" << std::endl;
        return;
    }
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::convertnan(const std::string &value) {
    (void)value;
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: Impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convertinf(const std::string &value) {
    if (value[0] == '-') {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    } else {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
}

void ScalarConverter::convertinff(const std::string &value) {
    if (value[0] == '-') {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    } else {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
}

int ScalarConverter::checktype(const std::string &value) {
    if (value.length() == 1 && std::isprint(static_cast<unsigned char>(value[0])) && !std::isdigit(static_cast<unsigned char>(value[0]))) {
        return type_char;
    }

    if (value == "nan" || value == "nanf") {
        return type_nan;
    }

    if (value == "inf" || value == "+inf" || value == "-inf") {
        return type_inf;
    }

    if (value == "inff" || value == "+inff" || value == "-inff") {
        return type_inff;
    }

    char* end;
    long long int_val = std::strtoll(value.c_str(), &end, 10);
    if (*end == '\0') {
        if (int_val >= std::numeric_limits<int>::min() && int_val <= std::numeric_limits<int>::max()) {
            return type_int;
        } else {
            return type_error;
        }
    }

    float float_val = std::strtof(value.c_str(), &end);
    if (*end == 'f' && *(end + 1) == '\0') {
        if (float_val >= -std::numeric_limits<float>::max() && float_val <= std::numeric_limits<float>::max()) {
            return type_float;
        } else {
            return type_error;
        }
    }

    double double_val = std::strtod(value.c_str(), &end);
    if (*end == '\0') {
        if (double_val >= -std::numeric_limits<double>::max() && double_val <= std::numeric_limits<double>::max()) {
            return type_double;
        } else {
            return type_error;
        }
    }

    return type_error;
}

void ScalarConverter::convert(const std::string &value) {
    int type = checktype(value);
    switch (type) {
        case type_char:
            convertchar(value);
            break;
        case type_int:
            convertint(value);
            break;
        case type_float:
            convertfloat(value);
            break;
        case type_double:
            convertdouble(value);
            break;
        case type_nan:
            convertnan(value);
            break;
        case type_inf:
            convertinf(value);
            break;
        case type_inff:
            convertinff(value);
            break;
        default:
            std::cout << "char: Invalid" << std::endl;
            std::cout << "int: Invalid" << std::endl;
            std::cout << "float: Invalid" << std::endl;
            std::cout << "double: Invalid" << std::endl;
    }
}