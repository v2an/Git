
#include <iostream>
#include <clocale>

int main()
{
	short int a = 43;
	int b = 897;
	long long c = 484'789'487'123;
	char d = 'C';
	bool e = false;
	float f = 0.0000000789f;
	double g = 89877434875.534f;


	enum MaruBatsu { _, X, O }; // Для крестики-нолики

	MaruBatsu Field[3][3] = { {_,_,_}, {_,_,_}, {_,_,_} }; // Массив с выводом. Правда, почему-то вместо символов выводит их значение. Хз как сделать нормальный вывод.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << Field[i][j] << " ";
		std::cout << std:: endl;
	}
	
	return 0;
}