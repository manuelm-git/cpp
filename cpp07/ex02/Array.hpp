#include <iostream>

template <typename T>
class Array
{
	private:
		T *arrayof;
		unsigned int n;
	public:
		Array(void) : arrayof(NULL) , n(0){};
		Array(unsigned int elements) : arrayof(new T[elements]()) ,n(elements){};
		Array(Array const &other);
		Array &operator=(Array const &other);
		T &operator[](unsigned int i) ;
		unsigned int size() const;
		~Array(void);
			
};

template <typename T>
Array<T>::Array(const Array<T> &other) : arrayof(NULL), n(0)
{
	*this = other;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) 
{
	if(this != &other)
	{
		delete[] arrayof;
		n = other.n;
		arrayof = new T[other.n];
		for(unsigned int i = 0; i < n; ++i)
		arrayof[i] = other.arrayof[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if(i >= n || arrayof == NULL)
		throw std::out_of_range("Index is out of bounds");
	return arrayof[i];
}
template <typename T>
unsigned int Array<T>::size() const
{
	return(n);
}
template <typename T>
Array<T>::~Array()
{
	if(arrayof != NULL)
		delete[] arrayof;
}