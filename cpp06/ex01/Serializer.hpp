#include <iostream>
#include <stdint.h>
typedef struct Data
{
	int data1;
	std::string data2;
}Data;
class Serializer
{
	private:
		Serializer(const Serializer &serializer);
		Serializer(/* args */);
		Serializer &operator=(const Serializer &other);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

