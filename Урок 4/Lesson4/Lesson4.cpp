#include <iostream>

int main()
{

    int nomber1, nomber2, uslovie;
    std::cout << "Enter two nombers: " << std::endl;
    std::cin >> nomber1;
    std::cin >> nomber2;
    uslovie = nomber1 + nomber2;
    if (uslovie >= 10 && uslovie <= 20)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    


    const int NOMBER3 = 3;
    const int NOMBER4 = 6;
    if (NOMBER3 == 10 || NOMBER4 == 10 || (NOMBER3 + NOMBER4) == 10)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }



    for (int n = 1; n <= 50; n++)
    {
        if ((n % 2) == 1)
        {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;



    int check;
    std::cout << "Enter int nomber from 0 to 100: ";
    std::cin >> check;
    if (check > 1)
    {
        int k = 0;
        int j = 2;
        do
        {
            if (((check % j) == 0) && (j != check))
            {
                k = 1;
                std::cout << "Not natural simple" << std::endl;
            }
            j++;
            //std::cout << k;
        } while ((j < check) && (k != 1));
        if (j == check)
        {
            std::cout << check << " natural simple nomber" << std::endl;
        }
    }
    else
    {
        std::cout << "Not natural simple" << std::endl;
    }


    int year;
    std::cout << "Enter year from 1 to 3000: ";
    std::cin >> year;
    if (((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)))
        std::cout << year << " is a leap year" << std::endl;
    else
        std::cout << year << " is'nt a leap year" << std::endl;


    return 0;
}
