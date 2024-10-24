#include "easyfind.hpp"
int main() 
{
    std::vector<int> vec;

	vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

	try
	{
    	std::cout << *easyfind(vec,30) << std::endl;
    	std::cout << *easyfind(vec,40) << std::endl;
    	std::cout << *easyfind(vec,50) << std::endl;
    	std::cout << *easyfind(vec,90) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error\nReason:\t" <<e.what() << '\n';
	}
	

    return 0;
}