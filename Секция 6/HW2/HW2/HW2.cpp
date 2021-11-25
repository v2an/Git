#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <chrono>

class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::string m_name;
	std::chrono::time_point<clock_t> m_beg;
	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}

public:
	Timer() : m_beg(clock_t::now()) { }
	Timer(std::string name) : m_name(name), m_beg(clock_t::now()) { }

	void start(std::string name) {
		m_name = name;
		m_beg = clock_t::now();
	}
	void print() const {
		std::cout << m_name << ":\t" << elapsed() * 1000 << " ms" << '\n';
	}
};


// ============================== EXRSZ 1 ==============================
template <typename SwIn>
void swappointers(SwIn*& input1, SwIn*& input2)
{
	int* temp = new int;
	temp = input1;
	input1 = input2;
	input2 = temp;
}

// ============================== EXRSZ 2 ==============================
template <typename SortIn>
void SortPointers(std::vector<SortIn*>& v1)
{
	sort(v1.begin(), v1.end(), [](SortIn* nom1, SortIn* nom2) 
		{
			return *nom1 < *nom2;
		});
}

template <typename PrIn>
void vecPrint(std::vector<PrIn*>& v1)
{
	for (int i = 0; i < v1.size(); ++i)
	{
		std::cout << " [" << *v1[i] << "] ";
	}
	std::cout << std::endl << std::endl;
}

// ============================== EXRSZ 3 ==============================
int check_by_count_find(std::vector<char>& file)
{
	Timer timer("Метод count-find: ");
	int count = std::count_if(file.begin(), file.end(), [](char ch) -> bool
	{
		std::vector<char> RUS{ 'а', 'у', 'о', 'ы', 'и', 'э', 'ю', 'ё', 'е', 'я' };
		auto result = std::find(RUS.begin(), RUS.end(), ch);
		if (result != std::end(RUS))
			return 1;
		else return 0;
	});
	timer.print();
	return count;
}

int check_by_count_for(std::vector<char>& file)
{
	Timer timer("Метод count-for: ");
	int count = std::count_if(file.begin(), file.end(), [](char ch) -> bool
		{
			std::vector<char> RUS{ 'а', 'у', 'о', 'ы', 'и', 'э', 'ю', 'ё', 'е', 'я' };
			for (char temp : RUS)
			{
				if (ch == temp)
				{
					return 1;
				}
			}
			return 0;
		});
	timer.print();
	return count;
}

int check_by_for_find(std::vector<char>& file, std::vector<char>& RUS)
{
	Timer timer("Метод for-find: ");
	int countFor_Find = 0;
	for (char temp : file)
	{
		auto result = std::find(RUS.begin(), RUS.end(), temp);
		if (result != std::end(RUS))
		{
			++countFor_Find;
		}
	}
	timer.print();
	return countFor_Find;
}

int check_by_for_for(std::vector<char>& file, std::vector<char>& RUS)
{
	Timer timer("Метод for-for: ");
	int countFor_For = 0;
	for (char temp : file)
	{
		for (char search : RUS)
		{
			if (temp == search)
			{
				++countFor_For;
			}
		}
	}
	timer.print();
	return countFor_For;
}


int main()
{
	// ============================== EXRSZ 1 ==============================
	int* integer1 = new int;
	*integer1 = 10;
	int* integer2 = new int;
	*integer2 = 43;
	std::cout << "int1: " << *integer1 << ", int2: " << *integer2 << std::endl;
	swappointers(integer1, integer2);
	std::cout << "int1: " << *integer1 << ", int2: " << *integer2 << std::endl;

	// ============================== EXRSZ 2 ==============================
	std::vector<int*> vec1;
	vec1.resize(20);
	for (int i = 0; i < 20; ++i)
	{
		vec1[i] = new int;
		*vec1[i] = rand();
	}
	vecPrint(vec1);
	SortPointers(vec1);
	vecPrint(vec1);

	// ============================== EXRSZ 3 ==============================
	setlocale(LC_ALL, "ru");
	std::ifstream testfile;
	testfile.open("C:\\Users\\v2an\\Desktop\\GB\\GeekBrains\\Git\\Секция 6\\HW2\\HW2\\Debug\\testfile.txt");
	std::vector<char> file;
	if (!testfile.is_open())
	{
		std::cout << "File didn't opened" << std::endl;
	}
	else
	{
		std::cout << "File sucsessfuly opened!" << std::endl;
		char temp;
		while (testfile.get(temp))
		{
			file.push_back(temp);
		}
	}

	std::vector<char> RUS{ 'а', 'у', 'о', 'ы', 'и', 'э', 'ю', 'ё', 'е', 'я' };

	int count1 = check_by_count_find(file);
	int count2 = check_by_count_for(file);
	int count3 = check_by_for_find(file, RUS);
	int count4 = check_by_for_for(file, RUS);

	std::cout << "Метод count-find: " << count1 << std::endl << "Метод count-for: " << count2 << std::endl << "Метод for-find: " << count3 << std::endl << "Метод for-for: " << count4 << std::endl;
}
