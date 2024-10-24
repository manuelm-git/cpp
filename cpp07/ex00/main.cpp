#include "whatever.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;
	float value1 = 50.3;
	float value2 = 2.1;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "\nFloat\n" << std::endl;
	std::cout << "value1 = " << value1 << ", value2 = " << value2 << std::endl;
	::swap(value1, value2);
	std::cout << "value1 = " << value1 << ", value2 = " << value2 << std::endl;
	std::cout << "min( value1, value2 ) = " << ::min( value1, value2 ) << std::endl;
	std::cout << "max( value1, value2 ) = " << ::max( value1, value2 ) << std::endl;

	return 0;
}