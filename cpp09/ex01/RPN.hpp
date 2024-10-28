#include <iostream>
#include <stack>

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

class RPN
{
	private:
		std::stack<int> stck;
		int *buf;
	public:
		RPN(/* args */);
		~RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		int isValidNumber(const char number);
		void reversepolishcalculator(char number);
		int readstr(char *argv);
};
