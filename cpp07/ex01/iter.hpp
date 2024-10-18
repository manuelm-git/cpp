#include <iostream>
#include <cmath>

template <typename Tarray ,typename Tfunc> 
void iter(Tarray *array,int length,Tfunc function)
{
	for(int i = 0;i < length; i++)
		function(array[i]);
}