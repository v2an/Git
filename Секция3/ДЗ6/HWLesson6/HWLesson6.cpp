#include <iostream>


int** ArrayInit(int rows, int cols)
{
    int** m = new int* [rows];
    for (int i = 0; i < rows; ++i) 
    {
        m[i] = new int[cols];
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "Enter " << i + 1 << " ," << j + 1 << " element of array: ";
            std::cin >> m[i][j];
        }
    }
    return m;
}

void PrintArray(int** InArray, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << " | " << InArray[i][j];
        }
        std::cout << " |" << std::endl;
    }
}


void Excers1(int** InArray, int m, int n)
{
    int temp = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (j == (n - 1) && i < (m - 1))
            {
                if (InArray[i][j] > InArray[i + 1][0])
                {
                    temp = InArray[i][j];
                    InArray[i][j] = InArray[i + 1][0];
                    InArray[i + 1][0] = temp;
                }
            }
            else
            {
                if (InArray[i][j] > InArray[i][j + 1] && j < (n - 1))
                {
                    temp = InArray[i][j];
                    InArray[i][j] = InArray[i][j+1];
                    InArray[i][j + 1] = temp;
                }
            }
        }
    }
}


//=======================================================================================================

int* ArrayTPKInit(int len)
{
    int* temp = new int[len];
    for (int i = 0; i < len; ++i)
    {
        std::cout << "Enter " << i + 1 << " element of array: ";
        std::cin >> temp[i];
    }
    return temp;
}

void Reverse(int* ArrayTPK, int len)
{
    int* temp = new int[len];
    for (int i = 1; i <= len; i++)
    {
        temp[i-1] = ArrayTPK[len - i];
    }
    for (int i = 1; i <= len; i++)
    {
        ArrayTPK[i-1] = temp[i-1];
    }
    std::cout << std::endl;
}

void PrintArray2(int* ArrayTPK, int len)
{
    for (int j = 0; j < len; j++)
    {
        std::cout << " | " << ArrayTPK[j];
    }
    std::cout << " |" << std::endl;
}

void CheckArray(int* ArrayTPK, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (sqrt(fabs(ArrayTPK[i])) + 5 * pow(ArrayTPK[i], 3) > 400)
        {
            std::cout << "Warning! Count of " << i+1 << " element > 400!" <<  std::endl;
        }
    }
}


int main()
{
    std::cout << "Enter size of array: ";
    int stroki = 3;
    int stolbchi = 3;
    std::cin >> stroki >> stolbchi;
    int **Array = ArrayInit(stroki, stolbchi);
    PrintArray(Array, stroki, stolbchi);
    Excers1(Array, stroki, stolbchi);
    std::cout << std::endl;
    PrintArray(Array, stroki, stolbchi);
    //===========================================================================================HW2
    int len = 11;
    int* ArrayTPK = ArrayTPKInit(len);
    PrintArray2(ArrayTPK, len);
    Reverse(ArrayTPK, len);
    PrintArray2(ArrayTPK, len);
    CheckArray(ArrayTPK, len);

    // thats better, then before?

}
