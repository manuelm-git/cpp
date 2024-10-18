#include "ScalarConverter.hpp"
#include <iostream>

void testConversion(const std::string &value) {
    std::cout << "Testing value: " << value << std::endl;
    ScalarConverter::convert(value);
    std::cout << std::endl;
}

int main() {
    // Test char literals
	testConversion("4.0.0");
    testConversion("a");
    testConversion("z");
    testConversion("0");
    testConversion("9");

    // Test int literals
    testConversion("0");
    testConversion("-42");
    testConversion("42");
    testConversion("2147483647"); // INT_MAX
    testConversion("-2147483648"); // INT_MIN

    // Test float literals
    testConversion("0.0f");
    testConversion("-4.2f");
    testConversion("4.2f");
    testConversion("3.4028235e+38f"); // FLT_MAX
    testConversion("1.17549435e-38f"); // FLT_MIN

    // Test double literals
    testConversion("0.0");
    testConversion("-4.2");
    testConversion("4.2");
    testConversion("1.7976931348623157e+308"); // DBL_MAX
    testConversion("2.2250738585072014e-308"); // DBL_MIN

    // Test pseudo literals
    testConversion("nan");
    testConversion("nanf");
    testConversion("+inf");
    testConversion("-inf");
    testConversion("+inff");
    testConversion("-inff");

    // Test edge cases
    testConversion("9223372036854775807"); // LLONG_MAX
    testConversion("-9223372036854775808"); // LLONG_MIN
    testConversion("4.2dd"); // Invalid input

    return 0;
}