#include <iostream>
#include <string>
using namespace std;

// ====================================================== EXRS 1 ======================================================

int EX1HashCode(string input)
{
    int Hash = 0;
    int lenght = input.size();
    for (int i = 0; i < lenght; i++)
    {
        Hash = Hash + input[i];
    }
    return Hash;
}

// ====================================================== EXRS 2 ======================================================
int HungryAlg(int* coins, int target, int summ, int last, int count)
{
    while (summ < target)
    {
        for (int i = 0; i < 5; i++)
        {
            if (last - coins[i] >= 0)
            {
                summ = summ + coins[i];
                last = last - coins[i];
                count++;
                break;
            }
        }

    }
    return count;
}


int main()
{
    // ====================================================== EXRS 1 ======================================================

    cout << "=================================================== EXRS 1 ===================================================" << endl;
    cout << "Enter somthing" << endl;
    string input;
    cin >> input;
    cout << "HashCode: " << EX1HashCode(input) << endl;

    // ====================================================== EXRS 1 ======================================================

    cout << "=================================================== EXRS 2 ===================================================" << endl;
    int coins[5] = { 50, 10, 5, 2, 1 };
    int target = 98;
    int last = target;
    int summ = 0;
    int count = 0;
    cout << HungryAlg(coins, target, summ, last, count);
    return 0;
}
