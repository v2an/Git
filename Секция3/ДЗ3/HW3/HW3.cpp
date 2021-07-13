#include <iostream>
#include <cmath>

using namespace std;
                                                //решение задания 1 до того, как более-менее понял, как работает рекурсия. В принципе, решение рабочее - протесчено со всеми целыми числами
/*int Sarray[255];                              
int BArray[255];
int i = -1;

void correctstring()
{
    for (int k = 0; k <= i; k++)
    {
        BArray[k] = Sarray[i - k];
    }
}

int HW1(int a)
{

    i = i + 1;
    string b;
    if (a >= 2)
    {
        Sarray[i] = a % 2;
        return HW1(a / 2);
    }
    else
    {
        Sarray[i] = 1;
    }
    correctstring();
    return 1;
}*/


void HW1(int a)
{
    //cout << a % 2;         - идея оказалась фигнёй, ибо выводит значения в обратном порядке
    if (a >= 2)
    {
        HW1(a / 2);
    }
    cout << a % 2;
    return;
}

int HW2_1(int a, int b)
{
    if (b > 0)
    {
        return a * HW2_1(a, b - 1);
    }
    return 1;
}

int HW2_2(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if ((b % 2) == 0)
    {
        return HW2_2(a * a, b / 2);     // спасибо большое. После того, как вы помогли с обычным вариантом, до меня дошло, как сделать учёт чётности, и оно работает
    }
    else
    {
        return a * HW2_2(a, b - 1);
    }
   return 0;
}

/*                                                                          Это старая функция, которая не смогла.
int HW3(int x, int y, int (&desk)[5][5])
{
    if (x == 0 && y == 0)
    {
        return 0;
    }
    else if ((x == 0 && desk[x][y - 1] != 1) || (y == 0 && desk[x - 1][y] != 1))
    {
        return 1;
    }
    else if ((x == 0 && desk[x][y - 1] == 1) || (y == 0 && desk[x - 1][y] == 1))
    {
        return 0;
    }
    else if (desk[x - 1][y] == 1 && desk[x][y - 1] == 1)
    {
        return 0;
    }
    else if (desk[x - 1][y] == 1 && desk[x][y - 1] == 0)
    {
        return HW3(x, y - 1, desk);
    }
    else if (desk[x - 1][y] == 0 && desk[x][y - 1] == 1)
    {
        return HW3(x - 1, y, desk);
    }
    else
    {
        return HW3(x, y - 1, desk) + HW3(x - 1, y, desk);
    }
}
*/

int HW3(int x, int y, int(&desk)[5][5])                                             // собственно, новая функция, которая смогла благодаря разбору.
{
    if (x == 0 && y == 0)
    {
        return 0;
    }
    else if (desk[x][y] == 1)                                                       // ВОТ ЧЕГО МНЕ НЕ ХВАТАЛО!
    {
        return 0;
    }
    else if (x == 0)                                                                // ВОТ ЧЕГО МНЕ НЕ ХВАТАЛО!
    {
        if (HW3(x, y - 1, desk) == 0 && y != 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (y == 0)                                                                // ВОТ ЧЕГО МНЕ НЕ ХВАТАЛО!
    {
        if (HW3(x - 1, y, desk) == 0 && x != 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (desk[x - 1][y] == 1 && desk[x][y - 1] == 1)
    {
        return 0;
    }
    else if (desk[x - 1][y] == 1 && desk[x][y - 1] == 0)
    {
        return HW3(x, y - 1, desk);
    }
    else if (desk[x - 1][y] == 0 && desk[x][y - 1] == 1)
    {
        return HW3(x - 1, y, desk);
    }
    else
    {
        return HW3(x, y - 1, desk) + HW3(x - 1, y, desk);
    }
}


int main()
{

    // ================================ Задание 1 ========================================

    int a;
    cout << "Enter int number: ";
    cin >> a;
    HW1(a); 
    /*
    correctstring();
    for (int k = 0; k < i + 1; k++)                            это дело использовалось до того, как переделал под return
    {
        cout << BArray[k];
    } */

    // ================================ Задание 2 ========================================

    cout << endl << "enter 2 numbers (number and exponentiation): ";
    int c, d;
    cin >> c >> d;
    cout << c << " ^ " << d << " = " << HW2_1(c, d) << endl;
    cout << c << " ^ " << d << " = " << HW2_2(c, d) << endl;
    
    // ================================ Задание 3 ========================================

    int desk[5][5] = { {0,0,0,0,0}, {0,0,1,0,0}, {1,0,1,0,0,}, {0,0,0,0,0}, {0,0,0,0,0} }; // это массив, обозначающий поле. Не очень наглядно, но работает.
    int deskafter[5][5];

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << desk[x][y];
        }
        cout << endl;
    }
    for (int y = 0; y < 5; y++)
    {
       for (int x = 0; x < 5; x++)
       {
           deskafter[x][y] = HW3(x, y, desk);
       }
    }
    cout << endl;

    for (int y = 0; y < 5; y++) 
    {
        for (int x = 0; x < 5; x++)
        {
            if (desk[x][y] == 1)                // это условие - попытка отметить "стены" на поле.
                cout << " | x";
            else
                cout << " | " << deskafter[x][y];
        }
        cout << endl;
    }

    return 0;
}
