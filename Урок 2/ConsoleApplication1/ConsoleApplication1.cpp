
#include <iostream>
#include <clocale> // Для вызова функции setlocale

using OOps = int;

int main()
{
    setlocale(LC_ALL, "Russian"); // подключаем русский язык в консоли

    auto a = 4;

    auto b = 9.453;

    OOps q = 57;

    std::cout << "Кажется, " << q << " погибло" << std::endl;

    int arr[10];

    arr[0] = 100;
    arr[1] = 200;

    arr[9] = 900;

    float arr2[20] = { 0.0 };

    arr[0] = arr[1] + arr[2];

    arr[4] = rand();

    char Name[] = { 'J', 'o', 'n', '\0' };
    char Name2[] = "Jon";

    Name2[1] = 'a';
    Name2[3] = 'e';

    std::cout << Name << " " << Name2 << std::endl;

    int Array[3][2] = { {1,2}, {3,4}, {5,6} };

    std::cout << sizeof(Array);



    return 0;

}

struct Company
{
    struct Employee
    {
        long id;
        unsigned short age;
        double salary;
    };
    CompanySize size;
    unsigned 
};