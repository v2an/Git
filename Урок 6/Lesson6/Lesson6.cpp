#include <iostream>
#include <cmath>
#include <fstream>


//=================================================================================================================================================================================================================================================
int Array1Lenght()
{
    int n;
    std::cout << "Enter lenght of array: ";
    std::cin >> n;
    return n;
}

void Array1(int n, int* ptrArr)
{
    for (int i = 0; i < n; i++)
    {
        ptrArr[i] = pow(2, i);
        //std::cout << ptrArr[i] << " ";
    }
    //std::cout << std::endl;
}

void PrintArray1(int* ptrArr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << ptrArr[i] << " | ";
    }
    std::cout << std::endl;
}

void Task1()
{
    int* ptrArr = nullptr;
    int n;
    n = Array1Lenght();
    //std::cout << n;
    ptrArr = new (std::nothrow) int[n];
    Array1(n, ptrArr);
    PrintArray1(ptrArr, n);
    delete[] ptrArr;
    ptrArr = nullptr;
    std::cout << std::endl;
}
//=================================================================================================================================================================================================================================================


//=================================================================================================================================================================================================================================================
size_t Array2SizeN(size_t n)
{
    std::cout << "Enter nomber of lines of array (n): ";
    std::cin >> n;
    return n;
}

size_t Array2SizeM(size_t m)
{
    std::cout << "Enter nomber of columns of array (m): ";
    std::cin >> m;
    return m;
}

void VArray2(int** Array2, size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 0; k < m; k++)
        {
            Array2[i][k] = std::rand();
        }
    }
}

void PrintArray2(int** Array2, size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 0; k < m; k++)
        {
            std::cout << Array2[i][k] << " | ";
        }
        std::cout << std::endl;
    }
}


void Task2()
{
    int** Array2 = nullptr;
    size_t n = 0;
    size_t m = 0;
    n = Array2SizeN(n);
    m = Array2SizeM(m);
    //std::cout << n << " | " << m << std::endl << std::endl;
    Array2 = new (std::nothrow) int* [n];
    for (size_t i = 0; i < n; i++)
    {
        Array2[i] = new int[m];
    }
    VArray2(Array2, n, m);
    PrintArray2(Array2, n, m);
    std::cout << std::endl;

    for (size_t i = 0; i < n; i++) 
    {
        delete[] Array2[i];
    }
    delete[] Array2;
    Array2 = nullptr;
}
//=================================================================================================================================================================================================================================================


//=================================================================================================================================================================================================================================================
std::string Function1()
{
    std::string name1, text1;
    text1 = "Peter Pan is a fictional character created by Scottish novelist and playwright J. M. Barrie. A free-spirited and mischievous young boy who can fly and never grows up, Peter Pan spends his never-ending childhood having adventures on the mythical island of Neverland as the leader of the Lost Boys, interacting with fairies, pirates, mermaids, Native Americans, and occasionally ordinary children from the world outside Neverland.";
    std::cout << "Enter name of 1st file(.txt): ";
    std::cin >> name1;
    std::ofstream fout(name1);
    fout << text1;
    fout.close();
    return name1;
}

std::string Function2()
{
    std::string name2, text2;
    text2 = "Peter Pan has become a cultural icon symbolizing youthful innocence and escapism. In addition to two distinct works by Barrie, The Little White Bird (1902, with chapters 13–18 published in Peter Pan in Kensington Gardens in 1906), and the West End stage play Peter Pan; or, the Boy Who Wouldn't Grow Up (1904, which expanded into the 1911 novel Peter and Wendy), the character has been featured in a variety of media and merchandise, both adapting and expanding on Barrie's works. These include the 1924 silent film, 1953 Disney animated film, a 2003 dramatic/live-action film, a television series and many other works.";
    std::cout << "Enter name of 2nd file(.txt): ";
    std::cin >> name2;
    std::ofstream fout(name2);
    fout << text2;
    fout.close();
    return name2;
}

/*
void Task4(std::string name1, std::string name2)                 -------------Не получилось, не работает
{
    std::string text1, text2, name3;
    std::ifstream fin(name1);
    const size_t size = 255;
    char buf[size];
    while (!fin.eof())
    {
        fin.getline(buf, size);
    }
    fin.close();

    std::ifstream fin2(name2);
    const size_t size2 = 255;
    char buf2[size];
    while (!fin2.eof())
    {
        fin2.getline(buf2, size2);
        text2 = buf2;
    }
    fin2.close();

    std::cout << "Enter name of 3rd file(.txt): ";
    std::cin >> name3;
    std::ofstream fout(name3);
    fout << text1 << std::endl;
    fout << text2 << std::endl;
    fout.close();
}
*/

void Task3()
{
    std::string name1, name2;
    name1 = Function1();
    name2 = Function2();
    //std::cout << name1 << " " << name2;
    //Task4(name1, name2);
}
//=================================================================================================================================================================================================================================================


int main()
{
    Task1();
    Task2();
    Task3();
    return 0;
}