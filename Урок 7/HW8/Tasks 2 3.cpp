#include <iostream>

//----------------------------------------------------------------------------------------------------------
#define COMPARISON(n, m) (((n < m) && (n >= 0)) ? true : false)
//----------------------------------------------------------------------------------------------------------
#define ARRAYSIZE 6
#define SwapINT(a, b, c) c = a; \
a = b; \
b = c;
//----------------------------------------------------------------------------------------------------------

void Print2(size_t n, size_t m)
{
	bool b = COMPARISON(n, m);
	if (b == true)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
}

void Task2()
{
	std::cout << "Enter any nomber: ";
	size_t n = 0;
	std::cin >> n;
	size_t m = 0;
	std::cout << "Enter limiter: ";
	std::cin >> m;
	Print2(n, m);
}

//----------------------------------------------------------------------------------------------------------




void Array3Init(int* Array3, int q)
{
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		std::cout << "Enter " << i << " element ofr int array: ";
		std::cin >> Array3[i];
	}
}

void ArraySort(int* Array3, int q)
{
	int temp;
	for (int i = 0; i < q - 1; i++)
	{
		for (int j = 0; j < q - i - 1; j++)
		{
			if (Array3[j] > Array3[j + 1])
			{
				SwapINT(Array3[j], Array3[j + 1], temp)
			}
		}
	}
}

void Task3()
{
	//int q;
	//std::cout << "Enter size of array: ";
	//std::cin >> q;
	int* Array3 = nullptr;
	Array3 = new int[ARRAYSIZE];

	Array3Init(Array3, ARRAYSIZE);

	/*
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		std::cout << "Enter " << i << " element ofr int array: ";
		std::cin >> Array3[i];
	}
	*/

	ArraySort(Array3, ARRAYSIZE);

	/*
	int temp;
		for (int i = 0; i < ARRAYSIZE - 1; i++)
	{
		for (int j = 0; j < ARRAYSIZE - i - 1; j++)
		{
			if (Array3[j] > Array3[j + 1]) 
			{
				SwapINT(Array3[j], Array3[j + 1], temp)
			}
		}
	}
	*/

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		std::cout << Array3[i] << " | ";
	}
}
//-------------------------------------------------------------------------------------------------------------------