#include "iter.hpp"
#include <iostream>

void printValue(int &value)
{
	std::cout << value << " ";
}

void printString(std::string &str)
{
	std::cout << str << " " << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::cout << "Array elements: ";
	iter(array, length, printValue);
	std::cout << std::endl;

	std::string strArray[] = {"Hello", "World", "!"};
	size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
	std::cout << "String array elements: ";
	iter(strArray, strLength, printString);

	return 0;

}