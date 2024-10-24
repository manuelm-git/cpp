#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container,int neddle)
{

	typename T::iterator itneedle = std::find(container.begin(),container.end(),neddle);
	if(itneedle == container.end())
		throw std::runtime_error("Not found");
	std::cout << "Found ";
	return itneedle;
}




