#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

class Pmerge
{
	public:
		Pmerge();
		~Pmerge();
		Pmerge(const Pmerge &other);
		Pmerge &operator=(const Pmerge &other);

		void fordJohnsonSort(std::vector<int> &arr, int left, int right);
		void merge(std::vector<int> &arr, int left, int mid, int right);
};

#endif // PMERGEME_HPP