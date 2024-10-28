#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}

int RPN::isValidNumber(const char number)
{
    return (number >= '0' && number <= '9');
}
RPN::RPN(const RPN &other)
{
	*this = other;
}
RPN &RPN::operator=(const RPN &other)
{
	(void)other;
	return *this;
}
void RPN::reversepolishcalculator(char token)
{
    if (isValidNumber(token))
        stck.push(token - '0');
    else
    {
        if (stck.size() < 2)
            throw Throwmyexception("Not enough operands");

        int b = stck.top();
        stck.pop();
        int a = stck.top();
        stck.pop();

        int result;
        switch (token)
        {
			case '+':
			{
				result = a + b;
				break;
			}
			case '-':
			{
				result = a - b;
				break;
			}
			case '*':
			{
				result = a * b;
				break;
			}
			case '/':
			{
				if (b == 0)
					throw Throwmyexception("Division by zero");

				result = a / b;
				break;
			}
			default:
				throw Throwmyexception("Invalid operator");
        }
		if(result > 2147483647 || result < 0)
			throw Throwmyexception("Surpassed max int");
        stck.push(result);
    }
}

int RPN::readstr(char *argv)
{
    int i = 0;
    while (argv[i] != '\0')
    {
        while (argv[i] == ' ')
            i++;
        if (isValidNumber(argv[i]) || argv[i] == '+' || argv[i] == '-' || argv[i] == '*' || argv[i] == '/')
            reversepolishcalculator(argv[i]);
        else
            throw Throwmyexception("Invalid values");
        i++;
    }
    if (stck.size() != 1)
        throw Throwmyexception("Cannot print result\nReason:More than one value in stack");
    std::cout << "Result: " << stck.top() << std::endl;
    return 0;
}