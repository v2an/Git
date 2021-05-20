#include<iostream>
#include<fstream>

#pragma pack (push, 1)
struct Employee
{
	long id;
	unsigned short age;
	double salary;
	std::string name;
};
#pragma pack (pop)

void Task4()
{
	struct Employee* E1 = new Employee();
	E1->id = 841687;
	E1->age = 23;
	E1->salary = 27'600.0;
	E1->name = "Josh Klinton";

	std::cout << E1->id << " | " << E1->age << " | " << E1->salary << " | " << E1->name << std::endl;
	std::cout << "Size of structure's element E1 is: " << sizeof(E1) << std::endl;

	std::ofstream File1("EmployeeE1.txt");
	File1 << "ID: " << E1->id << std::endl;
	File1 << "Age: " << E1->age << std::endl;
	File1 << "Salary: " << E1->salary << std::endl;
	File1 << "Name: " << E1->name << std::endl;
	File1.close();
}