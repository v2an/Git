#include <iostream>

using namespace std;

class Person
{
public:
    std::string name;
    int age;
    int weight;

    Person()
    {
        name = " ";
        age = 18;
        weight = 60;
    }
    Person(std::string nameT, int ageT, int weightT) : name(nameT), age(ageT), weight(weightT)
    {

    }
    int weightChange(int weightT)
    {
        weight = weightT;
        return weight;
    }
    std::string nameChange(std::string nameT)
    {
        name = nameT;
        return name;
    }
    int ageChange(int ageT)
    {
        age = ageT;
        return age;
    }
};

int countofstudents;

class Student: public Person
{
public:
    int grade;
    int nomber;

    Student()
    {
        grade = 1;
        countofstudents++;
        nomber = countofstudents;
    }
    Student(int gradeT) : grade(gradeT)
    {
        countofstudents++;
        nomber = countofstudents;
    }


    void gradeUp()
    {
        grade++;
    }
    int gradeChange(int newgrade)
    {
        grade = newgrade;
        return grade;
    }
    void fullData()
    {
        cout << "Name: " << name << endl << "Age: " << age << endl << "Weight: " << weight << endl << "Grade: " << grade << endl << endl;
    }
};

// ========================== EXRSZ 2 ==========================

class Fruit
{
public:
    string name;
    string color;

    string getColor()
    {
        return color;
    }
    string getName()
    {
        return name;
    }

};

class Apple : public Fruit
{
public:
    Apple()
    {
        color = "red";
        name = "apple";
    }
    Apple(string colorT)
    {
        color = colorT;
        name = "apple";
    }
};

class Banana : public Fruit
{
public:
    Banana()
    {
        color = "yellow";
        name = "banana";
    }
    Banana(string colorT)
    {
        color = colorT;
        name = "banana";
    }
};

class GrannySmith : public Apple
{
public:
    GrannySmith()
    {
        color = "green";
        name = "Granny Smith apple";
    }
    GrannySmith(string colorT)
    {
        color = colorT;
        name = "Granny Smith apple";
    }
};

int main()
{
    // ========================== EXRSZ 1 ==========================
    cout << endl << "========================== EXRSZ 1 ==========================" << endl << endl;

    Student *arr[10];
    int nom = 0;
    Student dima(2);
    nom++;
    arr[nom] = &dima;
    dima.ageChange(21);
    dima.nameChange("Dima");
    dima.weightChange(73);
    dima.fullData();

    Student dasha(1);
    nom++;
    arr[nom] = &dasha;
    dasha.ageChange(20);
    dasha.nameChange("Dasha");
    dasha.weightChange(62);
    dasha.fullData();

    Student roma(1);
    nom++;
    arr[nom] = &roma;
    roma.ageChange(20);
    roma.nameChange("Roma");
    roma.weightChange(82);
    roma.fullData();

    Student petya(3);
    nom++;
    arr[nom] = &petya;
    petya.ageChange(22);
    petya.nameChange("Petya");
    petya.weightChange(74);
    petya.fullData();

    cout << endl << "Enter name: ";
    string searchName;
    cin >> searchName;
    int check = 0;
    for (int i = 1; i <= nom; i++)
    {
        if (arr[i]->name == searchName)
        {
            arr[i]->fullData();
            check = 1;
        }
    }
    if (check != 1)
        cout << "Student with this name doesnt exists in libruary" << endl;

    // ========================== EXRSZ 2 ==========================
    cout << endl << "========================== EXRSZ 2 ==========================" << endl << endl;
    Apple a("red");
    Banana b;
    GrannySmith c;

    cout << "My " << a.getName() << " is " << a.getColor() << endl;
    cout << "My " << b.getName() << " is " << b.getColor() << endl;
    cout << "My " << c.getName() << " is " << c.getColor() << endl;
}
