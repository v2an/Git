#include <iostream>

namespace SomeRandomShit
{

	void ArrayInit(float* initArray, size_t n)
	{
		srand(static_cast <unsigned> (time(0)));
		for (size_t i = 0; i < n; i++)
		{
			initArray[i] = static_cast<float>((std::rand() % 201) + (-100)) / 7;
		}
	}

	void PrintArray(float initArray[], size_t n)
	{
		for (size_t i = 0; i < n; i++)
		{
			std::cout << initArray[i] << " | ";
		}
		std::cout << std::endl;
	}

	void ArrayCount(float initArray[], size_t n)
	{
		int plus = 0;
		int minus = 0;
		for (size_t i = 0; i < n; i++)
		{
			if (initArray[i] < 0)
				minus = ++minus;
			else
				plus = ++plus;
		}
		std::cout << "Array consists of " << plus << " positive and " << minus << " negative numbers" << std::endl;
	}

}