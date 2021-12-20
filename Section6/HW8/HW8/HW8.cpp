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

struct Nomber
{
    int country;
    int region;
    int nomber;
    int adjust;
};

std::ostream& operator << (std::ostream& os, const Person& p1)
{
    return os << p1.SureName << " " << p1.Name << " " << p1.FatherName << " ";
}

bool operator == (const Person& p1, const Person& p2)
{
    return std::tie(p1.FatherName, p1.Name, p1.SureName) == std::tie(p2.FatherName, p2.Name, p2.SureName);
}

bool operator == (const Nomber& p1, const Nomber& p2)
{
    return std::tie(p1.country, p1.region, p1.nomber, p1.adjust) == std::tie(p2.country, p2.region, p2.nomber, p2.adjust);
}

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
    //std::vector<std::pair<Person, Nomber>> Phone;
    //int sizeofbook = 0;
public:
    std::vector<std::pair<Person, Nomber>> Phone; // for tests
    int sizeofbook = 0; // for tests
    PhoneBook()    {
    }
    PhoneBook(std::ifstream& file)
    {
        Phone.resize(50);
        while (!file.eof())
        {
            if (!(file >> Phone[sizeofbook].first.SureName))
            {
                std::cout << "Empty base!" << std::endl;
                return;
            }
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
        std::cout << std::endl;
    }
    void SortByName()
    {
        std::sort(Phone.begin(), Phone.end(),

            [](const std::pair<Person, Nomber>& nomber1, const std::pair<Person, Nomber>& nomber2)
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
        int count = 0;
        int index = 0;
        Nomber empty{ 0, 000, 0000000, 00 };
        for (int i = 0; i < sizeofbook; i++)
        {
            if (Phone[i].first.SureName == Search)
            {
                index = i;
                count++;
            }
        };
        if (count > 1)
        {
            return std::tie("More than 1 nombers!", empty);
        }
        else if (count == 1)
        {
            return std::tie("", Phone[index].second);
        }
        else
        {
            return std::tie("Nomber not found", empty);
        }
    }
    void SortByPhone()
    {
        std::sort(Phone.begin(), Phone.end(),

            [](const std::pair<Person, Nomber>& nomber1, const std::pair<Person, Nomber>& nomber2)
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
    std::string ChangePhoneNumber(Person SearchingPerson, Nomber NewNomber) //test version
    //void ChangePhoneNumber(Person SearchingPerson, Nomber NewNomber) //normal version
    {
        for (int i = 0; i < sizeofbook; i++)
        {
            if (SearchingPerson == Phone[i].first)
            {
                Phone[i].second.adjust = NewNomber.adjust;
                Phone[i].second.region = NewNomber.region;
                Phone[i].second.country = NewNomber.country;
                Phone[i].second.nomber = NewNomber.nomber;
                return "OK";
            }
        }
        return "Person don't exists in phone book";
    }
    void AddNomber(std::pair<Person, Nomber> NewNomber)
    {
        Phone.push_back(NewNomber);
        ++sizeofbook;
    }
};

// ==================================================TESTING CORNER==================================================
void AddTest()
{
    PhoneBook TestBook;
    TestBook.AddNomber(std::pair(Person{ "Petrov", "Petr", "Petrovich" }, Nomber{ 7, 495, 9155448, 13 }));
    if (TestBook.Phone[0] == std::pair(Person{ "Petrov", "Petr", "Petrovich" }, Nomber{ 7, 495, 9155448, 13 }))
        std::cout << "Adding test OK" << std::endl;
    else
        std::cout << "Adding test failed" << std::endl;
}
// ==================================================TESTING CORNER==================================================
void SortByPhoneTest()
{
    PhoneBook TestBook;
    TestBook.AddNomber(std::pair(Person{ "Andropov", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Federov", "Petr", "Petrovich" }, Nomber{ 7, 978, 9955448, 99 }));
    TestBook.AddNomber(std::pair(Person{ "Vaanov", "Petr", "Petrovich" }, Nomber{ 7, 494, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 493, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Panin", "Petr", "Petrovich" }, Nomber{ 7, 492, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Sheftelevich", "Petr", "Petrovich" }, Nomber{ 6, 495, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Obramov", "Petr", "Petrovich" }, Nomber{ 7, 497, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Kozhukhov", "Petr", "Petrovich" }, Nomber{ 7, 498, 9155448, 13 }));
    TestBook.SortByPhone();
    if (TestBook.Phone[7] == std::pair(Person{ "Andropov", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }))
        std::cout << "Sort by nomber test OK" << std::endl;
    else
        std::cout << "Sort by nomber test failed" << std::endl;
}
// ==================================================TESTING CORNER==================================================
void SortByNameTest()
{
    PhoneBook TestBook;
    TestBook.AddNomber(std::pair(Person{ "Andropov", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Federov", "Petr", "Petrovich" }, Nomber{ 7, 978, 9955448, 99 }));
    TestBook.AddNomber(std::pair(Person{ "Vaanov", "Petr", "Petrovich" }, Nomber{ 7, 494, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 493, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Panin", "Petr", "Petrovich" }, Nomber{ 7, 492, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Sheftelevich", "Petr", "Petrovich" }, Nomber{ 6, 495, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Obramov", "Petr", "Petrovich" }, Nomber{ 7, 497, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Kozhukhov", "Petr", "Petrovich" }, Nomber{ 7, 498, 9155448, 13 }));
    TestBook.SortByName();
    if (TestBook.Phone[7] == std::pair(Person{ "Vaanov", "Petr", "Petrovich" }, Nomber{ 7, 494, 9155448, 13 }))
        std::cout << "Sort by name test OK" << std::endl;
    else
        std::cout << "Sort by name test failed" << std::endl;
}
// ==================================================TESTING CORNER==================================================
void GetPhoneNumberTest()
{
    PhoneBook TestBook;
    TestBook.AddNomber(std::pair(Person{ "Andropov", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Federov", "Petr", "Petrovich" }, Nomber{ 7, 978, 9955448, 99 }));
    TestBook.AddNomber(std::pair(Person{ "Vaanov", "Petr", "Petrovich" }, Nomber{ 7, 494, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 493, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Panin", "Petr", "Petrovich" }, Nomber{ 7, 492, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Sheftelevich", "Petr", "Petrovich" }, Nomber{ 6, 495, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Andropov", "Vaasya", "Petrovich" }, Nomber{ 7, 497, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Kozhukhov", "Petr", "Petrovich" }, Nomber{ 7, 498, 9155448, 13 }));

    std::tuple<std::string, Nomber> Take = TestBook.GetPhoneNumber("Sheftelevich");
    if (Take == std::tuple<std::string, Nomber>("", Nomber{ 6, 495, 9155448, 13 }))
        std::cout << "Get Phone Number test 1/3 OK" << std::endl;
    else
        std::cout << "Get Phone Number test 1/3 failed" << std::endl;

    Take = TestBook.GetPhoneNumber("Hrenov");
    if (Take == std::tuple<std::string, Nomber>("Nomber not found", Nomber{ 0, 000, 0000000, 00 }))
        std::cout << "Get Phone Number test 2/3 OK" << std::endl;
    else
        std::cout << "Get Phone Number test 2/3 failed" << std::endl;

    Take = TestBook.GetPhoneNumber("Andropov");
    if (Take == std::tuple<std::string, Nomber>("More than 1 nombers!", Nomber{ 0, 000, 0000000, 00 }))
        std::cout << "Get Phone Number test 3/3 OK" << std::endl;
    else
        std::cout << "Get Phone Number test 3/3 failed" << std::endl;
}
// ==================================================TESTING CORNER==================================================
void ChangePhoneNumberTest()
{
    PhoneBook TestBook;
    TestBook.AddNomber(std::pair(Person{ "Andropov", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Federov", "Petr", "Petrovich" }, Nomber{ 7, 978, 9955448, 99 }));
    TestBook.AddNomber(std::pair(Person{ "Vaanov", "Petr", "Petrovich" }, Nomber{ 7, 494, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 493, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Panin", "Petr", "Petrovich" }, Nomber{ 7, 492, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Sheftelevich", "Petr", "Petrovich" }, Nomber{ 6, 495, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Obramov", "Petr", "Petrovich" }, Nomber{ 7, 497, 9155448, 13 }));
    TestBook.AddNomber(std::pair(Person{ "Kozhukhov", "Petr", "Petrovich" }, Nomber{ 7, 498, 9155448, 13 }));

    TestBook.ChangePhoneNumber(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 });
    if (TestBook.Phone[3] == std::pair(Person{ "Susanin", "Petr", "Petrovich" }, Nomber{ 7, 999, 9155448, 13 }))
        std::cout << "Change Phone Number test 1/2 OK" << std::endl;
    else
        std::cout << "Change Phone Number test 1/2 failed" << std::endl;

    TestBook.ChangePhoneNumber(Person{ "Susanin", "Petr", "Vasilich" }, Nomber{ 7, 999, 9155448, 13 });
    if (TestBook.ChangePhoneNumber(Person{ "Susanin", "Petr", "Vasilich" }, Nomber{ 7, 999, 9155448, 13 }) == "Person don't exists in phone book")
        std::cout << "Change Phone Number test 2/2 OK" << std::endl;
    else
        std::cout << "Change Phone Number test 2/2 failed" << std::endl;
}
// ==================================================TESTING CORNER==================================================


int main()
{
    // ==================================================TESTING CORNER==================================================
    std::cout << std::endl << "==================================================TEST==================================================" << std::endl;
    AddTest(); // =======================================TESTING CORNER==================================================
    SortByPhoneTest(); // ===============================TESTING CORNER==================================================
    SortByNameTest(); // ================================TESTING CORNER==================================================
    GetPhoneNumberTest(); // ============================TESTING CORNER==================================================
    ChangePhoneNumberTest(); // =========================TESTING CORNER==================================================
    std::cout << "==============================================END OF TEST==============================================" << std::endl << std::endl;
    // ==================================================TESTING CORNER==================================================
    
    // Next main programm ------>
    std::ifstream file("C:\\Users\\v2an\\Desktop\\GB\\GeekBrains\\Git\\Section6\\HW8\\HW8\\Base.txt");
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
}
