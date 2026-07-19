#include "iter.hpp"
#include <iostream>

void printValue(int &value)
{
	std::cout << value << " ";
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::cout << "Array elements: ";
	iter(array, length, printValue);
	std::cout << std::endl;

	return 0;

}