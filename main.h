#include <iostream>
#include "Array.h"
int main()
{
	Array myArray(5);
	for (size_t i = 0; i < myArray.Size(); i++)
	{
		std::cout << myArray[i] << " ";
	}