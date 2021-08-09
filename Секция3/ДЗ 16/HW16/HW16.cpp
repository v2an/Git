#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ==================================== EXRZ 1 ====================================

string CezarCript(string input, int key)
{
    string cript = input;
    int n = input.size();
    int temp;
    if (key >= 26)
    {
        key = key % 26;
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
        {
            temp = input[i] + key;
            if (temp > 90)
            {
                temp = temp - 90 + 64;
            }
            cript[i] = temp;
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            temp = input[i] + key;
            if (temp > 122)
            {
                temp = temp - 122 + 96;
            }
            cript[i] = temp;
        }
        else
        {
            cript[i] = input[i];
        }
    }
    return cript;
}

string CezarDecript(string input, int key)
{
    string decript = input;
    int n = input.size();
    if (key >= 26)
    {
        key = key % 26;
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
        {
            decript[i] = input[i] - key;
            if (decript[i] < 64)
            {
                decript[i] = decript[i] + 90 - 64;
            }
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            decript[i] = input[i] - key;
            if (decript[i] < 97)
            {
                decript[i] = decript[i] + 122 - 96;
            }
        }
        else
        {
            decript[i] = input[i];
        }
    }
    return decript;
}

// ==================================== EXRZ 2 ====================================

string PerCript(string input, int coulumns)
{
    int Q = input.size();
    int count = 0;
    int stroki;
    char* temp = nullptr;
    temp = new char[Q + coulumns];
    for (int i = 0; i < (Q+coulumns); i++)
    {
        temp[i] = 1;
    }
    for (int i = 0; i < Q; i++)
    {
        if (input[i] != 32)
        {
            temp[count] = input[i];
            count++;
        }
    }
    stroki = std::ceil(count / (double)coulumns);
    char** temp2 = new char* [stroki];
    count = 0;
    for (int i = 0; i < stroki; i++)
    {
        temp2[i] = new char[coulumns];
    }
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < coulumns; j++)
        {
            temp2[i][j] = 0;        
        }
    }
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < coulumns; j++)
        {
            if (temp[count] == 1)
            {
                temp2[i][j] = 'b';
            }
            else
            {
                temp2[i][j] = temp[count];
                count++;
            }
            
        }
    }
    string cript;
    for (int j = 0; j < coulumns; j++)
    {
        for (int i = 0; i < stroki; i++)
        {
            cript += temp2[i][j];
        }
    }
    return cript;
}

string PerDeCript(string input, int coulumns)
{
    int Q = input.size();
    int count = 0;
    int stroki = coulumns;
    int stolbci;
    stolbci = std::ceil(Q / (double)stroki);
    char** temp = new char* [stroki];
    count = 0;
    for (int i = 0; i < stroki; i++)
    {
        temp[i] = new char[stolbci];
    }
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < stolbci; j++)
        {
            temp[i][j] = input[count];
            count++;
        }
    }
    string cript;
    for (int j = 0; j < stolbci; j++)
    {
        for (int i = 0; i < stroki; i++)
        {
            cript += temp[i][j];
        }
    }
    return cript;
}

int main()
{
    // ==================================== EXRZ 1 ====================================
    cout << "==================================== EXRZ 1 ====================================" << endl << endl;
    int keyCez;
    cout << "Enter your message: ";
    string inputCez;
    getline(cin, inputCez);  // one input to both exersizes!
    cout << "Enter key: ";
    cin >> keyCez;
    string CezCript = CezarCript(inputCez, keyCez);
    CezarDecript(CezarCript(inputCez, keyCez), keyCez);
    cout << inputCez << endl;
    cout << CezCript << endl;
    cout << CezarDecript(CezCript, keyCez) << endl << endl;

    // ==================================== EXRZ 2 ====================================
    cout << "==================================== EXRZ 2 ====================================" << endl << endl;
    int keyPer;
    cout << "Enter key: ";
    cin >> keyPer;
    string PerCriptedMessage = PerCript(inputCez, keyPer);
    cout << PerCriptedMessage << endl;
    cout << PerDeCript(PerCriptedMessage, keyPer);
}
