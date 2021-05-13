#include <iostream>

// ========================================================================= Task 1
void Print(double Array[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl;
}
// ================================================================================


// ========================================================================= Task 2
void Change0to1(int ArrayBi[], const int size2)
{
    std::cout << "New array: ";
    for (int i = 0; i < size2; i++)
    {
        if (ArrayBi[i] == 0)
            ArrayBi[i] = 1;
        else
            ArrayBi[i] = 0;
        std::cout << ArrayBi[i] << " ";
    }
    std::cout << std::endl;
}
// ================================================================================


// ========================================================================= Task 3
void FillArray(int EmptyArr[], const int size3)
{
    EmptyArr[0] = 1;
    std::cout << EmptyArr[0] << " ";
    for (int i = 1; i < size3; i++)
    {
        EmptyArr[i] = EmptyArr[i - 1] + 3;
        std::cout << EmptyArr[i] << " ";
    }
}
// ================================================================================


int main()
{
    // ===================================================================== Task 1
    const int size = 5;
    double Array[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter " << (i + 1) << " nomber of array: ";
        std::cin >> Array[i];
    }
    Print(Array, size);
    std::cout << std::endl;
    // ============================================================================



    // ===================================================================== Task 2
    const int size2 = 9;
    int ArrayBi[size2];
    for (int i = 0; i < size2; i++)
    {
        std::cout << "Enter " << (i + 1) << " nomber of array (0 or 1): ";
        std::cin >> ArrayBi[i];
    }
    std::cout << "Old array: ";
    for (int i = 0; i < size2; i++)
    {
        std::cout << ArrayBi[i] << " ";
    }
    std::cout << std::endl;
    Change0to1(ArrayBi, size2);
    std::cout << std::endl;
    // ============================================================================



    // ===================================================================== Task 3
    const int size3 = 8;
    int EmptyArr[size3];
    FillArray(EmptyArr, size3);
    // ============================================================================

    return 0;
}


