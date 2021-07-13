#include <iostream>
using namespace std;

void natural(int a)
{
    if ((a != 0) && (a > 0)) // число не меньше или равно 0
    {
        if (a != 1) // число не 1
        {
            for (int i = 2; i < a; i++) // цикл от 2 до числа НЕ включительно!
            {
                float c;
                c = a % i;
                if (c == 0) // проверка на отстаток от деления
                {
                    cout << a << " is not natural nomber"; // если остатка нет, то i - делитель и число не натуральное
                    return;
                }
            }
            cout << a << " is a natural nomber"; // если цикл прошёл без выхода, значит делителей нет и число натуральное
            return;
        }
        else
        {
            cout << a << " is a natural nomber & = 1"; // если число = 1
            return;
        }
    }
    else
    {
        cout << "ERR:nomber " << a << " equal or less 0"; // если число <= 0
    }
}


int main()
{
    int b;
    cout << "Enter any positive int nomber" << endl; // Запрос на ввод
    cin >> b; // ввод
    natural(b); // вызов функции проверки
    return 0;
}

