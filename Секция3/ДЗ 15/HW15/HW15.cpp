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

struct Coin
{
    int value;
    Coin* next;
};

struct list
{
    int size;
    Coin* head;
};

void listinit(list* list)
{
    list->head = nullptr;
    list->size = 0;
}

void push(list* st, int dat)
{
    Coin* tmp = new Coin;
    if (tmp == nullptr)
    {
        std::cout << "Stack overflow" << endl;
        return;
    }
    tmp->value = dat;
    tmp->next = st->head;
    st->head = tmp;
    st->size++;
    return;
}

int HungryAlg(int* coins, int target, list* COINS)
{
    int last = target;
    int summ = 0;
    int count = 0;
    while (summ < target)
    {
        for (int i = 0; i < 5; i++)
        {
            if (last - coins[i] >= 0)
            {
                summ = summ + coins[i];
                last = last - coins[i];
                count++;
                push(COINS, coins[i]);
                break;
            }
        }

    }
    return count;
}

void printStack(list* st)
{
    Coin* tmp = st->head;
    int Q = st->size;
    for (int i = 0; i < Q; i++)
    {
        cout << "[" << tmp->value << "] ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    // ====================================================== EXRS 1 ======================================================

    cout << "=================================================== EXRS 1 ===================================================" << endl << endl;
    cout << "Enter somthing" << endl;
    string input;
    cin >> input;
    cout << "HashCode: " << EX1HashCode(input) << endl << endl;

    // ====================================================== EXRS 1 ======================================================

    cout << "=================================================== EXRS 2 ===================================================" << endl << endl;
    int coins[5] = { 50, 10, 5, 2, 1 };
    cout << "Enter target summ: ";
    int target;
    cin >> target;
    list* COINS = new list;
    listinit(COINS);
    cout << endl << "Nomber of coins: " << HungryAlg(coins, target, COINS) << endl;
    cout << "Coins: ";
    printStack(COINS);
    return 0;
}
