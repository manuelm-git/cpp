#include "ScalarConverter.hpp"
#include <iostream>

int main() {
    // Char literals
    ScalarConverter::convert("c");
    std::cout << std::endl;
    ScalarConverter::convert("a");
    std::cout << std::endl;
    ScalarConverter::convert("}");
    std::cout << std::endl;

    // Int literals
    ScalarConverter::convert("0");
    std::cout << std::endl;
    ScalarConverter::convert("-42");
    std::cout << std::endl;
    ScalarConverter::convert("42");
    std::cout << std::endl;
    ScalarConverter::convert("127");
    std::cout << std::endl;
    ScalarConverter::convert("2147483647");
    std::cout << std::endl;
    ScalarConverter::convert("+2147483647");
    std::cout << std::endl;
    ScalarConverter::convert("2147483648");
    std::cout << std::endl;
    ScalarConverter::convert("-2147483648");
    std::cout << std::endl;
    ScalarConverter::convert("-2147483649");
    std::cout << std::endl;

    // Float literals
    ScalarConverter::convert("0.0f");
    std::cout << std::endl;
    ScalarConverter::convert("-4.2f");
    std::cout << std::endl;
    ScalarConverter::convert("4.2f");
    std::cout << std::endl;
    ScalarConverter::convert("2147483647.4f");
    std::cout << std::endl;
    ScalarConverter::convert("2147483647.0f");
    std::cout << std::endl;
    ScalarConverter::convert("+2147483647.0f");
    std::cout << std::endl;
    ScalarConverter::convert("-inff");
    std::cout << std::endl;
    ScalarConverter::convert("+inff");
    std::cout << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << std::endl;

    // Double literals
    ScalarConverter::convert("0.0");
    std::cout << std::endl;
    ScalarConverter::convert("-4.2");
    std::cout << std::endl;
    ScalarConverter::convert("4.2");
    std::cout << std::endl;
    ScalarConverter::convert("2147483647.4");
    std::cout << std::endl;
    ScalarConverter::convert("2147483647.0");
    std::cout << std::endl;
    ScalarConverter::convert("+2147483647.0");
    std::cout << std::endl;
    ScalarConverter::convert("-inf");
    std::cout << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;

    // Invalid input
    ScalarConverter::convert("\n");
    std::cout << std::endl;

    return 0;
}