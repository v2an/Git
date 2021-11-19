#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <optional>

struct Person
{
    std::string SureName;
    std::string Name;
    std::string FatherName;
};

std::ostream& operator << (std::ostream& os, const Person& p1)
{
    return os << p1.SureName << " " << p1.Name << " " << p1.FatherName << " ";
}

bool operator == (const Person& p1, const Person& p2)
{
    return std::tie(p1.FatherName, p1.Name, p1.SureName) == std::tie(p2.FatherName, p2.Name, p2.SureName);
}

struct Nomber
{
    int country;
    int region;
    int nomber;
    int adjust;
};

std::ostream& operator << (std::ostream& os, const Nomber& n1)
{
    if (n1.adjust == 0)
        return os << "+" << n1.country << "(" << n1.region << ")" << n1.nomber;
    else
        return os << "+" << n1.country << "(" << n1.region << ")" << n1.nomber << " ad." << n1.adjust;
}

class PhoneBook
{
private:
    std::vector<std::pair<Person, Nomber>> Phone;
    int sizeofbook = 0;
public:
    PhoneBook()
    {
        Phone.resize(50);
    }
    PhoneBook(std::ifstream& file)
    {
        Phone.resize(50);
        while (!file.eof())
        {
            file >> Phone[sizeofbook].first.SureName;
            file >> Phone[sizeofbook].first.Name;
            file >> Phone[sizeofbook].first.FatherName;
            file >> Phone[sizeofbook].second.country;
            file >> Phone[sizeofbook].second.region;
            file >> Phone[sizeofbook].second.nomber;
            file >> Phone[sizeofbook].second.adjust;
            sizeofbook++;
        }
        Phone.resize(sizeofbook);
    }
    void PrintBook()
    {
        for (int i = 0; i < sizeofbook; i++)
        {
            std::cout << Phone[i].first << Phone[i].second << std::endl;
        }
    }
    void SortByName()
    {
        std::sort(Phone.begin(), Phone.end(),

            [](std::pair<Person, Nomber> nomber1, std::pair<Person, Nomber> nomber2)
            {
                if (nomber1.first.SureName < nomber2.first.SureName)
                    return true;
                else if (nomber1.first.SureName == nomber2.first.SureName)
                {
                    if (nomber1.first.Name < nomber2.first.Name)
                        return true;
                    else if (nomber1.first.Name == nomber2.first.Name)
                    {
                        if (nomber1.first.FatherName < nomber2.first.FatherName)
                            return true;
                        else return false;

                    }
                    else return false;

                }
                else return false;
            });
    }
    std::tuple<std::string, Nomber> GetPhoneNumber(const std::string& Search)
    {
        int C = 0;
        int index = 0;
        for (int i = 0; i < sizeofbook; i++)
        {
            if (Phone[i].first.SureName == Search)
            {
                index = i;
                C++;
            }
        };
        if (C > 1)
        {
            return std::tie("More than 1 nombers!", Phone[0].second);
        }
        else if (C == 1)
        {
            return std::tie("", Phone[index].second);
        }
        else
        {
            return std::tie("Nomber not found", Phone[0].second);
        }
    }
    void SortByPhone()
    {
        std::sort(Phone.begin(), Phone.end(), 

            [](std::pair<Person, Nomber> nomber1, std::pair<Person, Nomber> nomber2)
            {
                if (nomber1.second.country < nomber2.second.country)
                    return true;
                else if (nomber1.second.country == nomber2.second.country)
                {
                    if (nomber1.second.region < nomber2.second.region)
                        return true;
                    else if (nomber1.second.region == nomber2.second.region)
                    {
                        if (nomber1.second.nomber < nomber2.second.nomber)
                            return true;
                        else if (nomber1.second.nomber == nomber2.second.nomber)
                        {
                            if (nomber1.second.adjust < nomber2.second.adjust)
                                return true;
                            else return false;
                        }
                        else return false;

                    }
                    else return false;

                }
                else return false;
            });
    }
    void ChangePhoneNumber(Person SearchingPerson, Nomber NewNomber)
    {
        for (int i = 0; i < sizeofbook; i++)
        {
            if (SearchingPerson == Phone[i].first)
            {
                Phone[i].second.adjust = NewNomber.adjust;
                Phone[i].second.region = NewNomber.region;
                Phone[i].second.country = NewNomber.country;
                Phone[i].second.nomber = NewNomber.nomber;
                return;
            }
        }
    }
};


int main()
{
    std::ifstream file ("C:\\Users\\v2an\\Desktop\\GB\\GeekBrains\\Git\\Секция 6\\HW1\\HW1\\Debug\\Base.txt");
    if (!file)
    {
        std::cout << "File dont open\n\n";
        return -1;
    }
    else
    {
        std::cout << "File opened!\n\n";
    }
    PhoneBook book1(file);
    book1.PrintBook();

    book1.SortByPhone();
    std::cout << std::endl << "-----------SORT BY PHONE-----------" << std::endl;
    book1.PrintBook();

    std::cout << std::endl << "-----------SORT BY NAME-----------" << std::endl;
    book1.SortByName();
    book1.PrintBook();

    auto print_phone_number = [&book1](const std::string& surname) {
        std::cout << surname << "\t";
        auto answer = book1.GetPhoneNumber(surname);
        if (std::get<0>(answer).empty())
            std::cout << std::get<1>(answer);
        else
            std::cout << std::get<0>(answer);
        std::cout << std::endl;
    };

    std::cout << std::endl;
    print_phone_number("Kozhukhov");
    std::cout << std::endl;
    print_phone_number("Asdqs");
    std::cout << std::endl;



    std::cout << "----ChangePhoneNumber----" << std::endl;
    book1.ChangePhoneNumber(Person{ "Varennikov", "Vladimir", "Vladimirovitch" }, Nomber{ 16, 465, 9155448, 13 });
    book1.ChangePhoneNumber(Person{ "Mironova", "Margarita", "Vladimirovna" }, Nomber{ 16, 465, 9155448, 13 });
    book1.PrintBook();
    /*
    std::string PersonPhone1[5][7];
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i <= 6; i++)
        {
            file >> PersonPhone1[j][i];
        }
        std::cout << PersonPhone1[j][0] << " " << PersonPhone1[j][1] << " " << PersonPhone1[j][2] << " +" << PersonPhone1[j][3] << "(" << PersonPhone1[j][4] << ")" << PersonPhone1[j][5] << " dob." << PersonPhone1[j][6] << std::endl;
    }
    */
}
