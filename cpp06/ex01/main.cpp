#include "Serializer.hpp"

int main()
{
	Data storage;
	
	storage.data1 = 10;
	storage.data2 = "password";

	std::cout << "Data1 value:" << storage.data1 << std::endl;
	std::cout << "Data2 value:" << storage.data2 << std::endl;

	uintptr_t intpointer = Serializer::serialize(&storage);
	std::cout << "\n\nSerialized...\n\n";

	Data *storageptr = Serializer::deserialize(intpointer);
	std::cout << "\n\nDeserialized...\n\n";

	std::cout << "Data1 value:" << storage.data1 << "\nData1 members:" << &storageptr->data1 << std::endl;
	std::cout << "\n\nData2 value:" << storage.data2 << "\nData2 members:" << &storageptr->data2 << std::endl;
	if (storageptr == &storage) {
        std::cout << "\nSerialization and Deserialization is correct both pointers match\n";
    } else {
        std::cout << "\nSerialization and Deserialization is INcorrect both pointers DO NOT match\n";
    }
}