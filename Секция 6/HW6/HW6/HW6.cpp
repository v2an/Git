#include <iostream>
#include <string>
#include <ostream>
#include <mutex>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;
std::mutex m1;
std::mutex m2;

// ========================================== EXRSZ 1 ==========================================
void pcout(const std::string& out)
{
	m1.lock();
	std::cout << out << std::endl;
	m1.unlock();
}

class Pcout
{
public:
	std::string output;
	Pcout()
	{

	}
	Pcout(std::string in) : output(in) {

	}
	void print()
	{
		m1.lock();
		auto id = std::this_thread::get_id();
		std::cout << " id:" << id << " /" << "1" << "2" << "3" << "4" << "5" << "6" << " id:" << id << " ";
		std::cout << output << " id:" << id;
		std::cout << std::endl;
		m1.unlock();
	}
};

// ========================================== EXRSZ 2 ==========================================
void SimpleNNombers(int n, int &out)
{
	if (n <= 0)
		return;
	int count = 1;
	int nomber = 2;
	int simple;
	do
	{
		bool check = 0;
		for (int c = 2; c <= (nomber/2); ++c)
		{
			if (nomber % c == 0)
				check = 1;
		}
		if (check == 0)
		{
			simple = nomber;
			std::cout << count << ": " << simple << std::endl;
			++count;
		}
		++nomber;
	} while (count <= n);
	out = simple;
	return;
}

// ========================================== EXRSZ 3 ==========================================
void PrintVec(const std::vector<int>& out)
{
	for (auto iter : out)
	{
		std::cout << iter << " ";
	}
	std::cout << std::endl;
}

void funcAdd(std::vector<int>& input)
{
	for (int i = 0; i < 10; ++i)
	{
		m2.lock();
		input.push_back(std::rand()%10);
		m2.unlock();
		PrintVec(input);
		std::this_thread::sleep_for(1s);
	}

}

void funcTake(std::vector<int>& input)
{
	for (int i = 0; i < 20; ++i)
	{
		if (input.size() >= 1)
		{
			m2.lock();
			input.erase(std::max_element(input.begin(), input.end()));
			m2.unlock();
		}
		PrintVec(input);
		std::this_thread::sleep_for(500ms);
	}
}


int main()
{
	// ========================================== EXRSZ 1 ==========================================
	std::thread th1(pcout, "Its verry bad idea, i guess");					//Если коротко, так и не понял, что от меня хотят
	std::thread th2(pcout, "I dont know what is wrapper is");				//Мало того, что я так и не разобрался, что вообще такое обёртка
	std::thread th3(pcout, "And how to create it");							//и как её применить к std::cout (да и вообще, как её применять)
	std::string strout = "trying to output";								
	Pcout out1(strout);
	std::thread th4(&Pcout::print, &out1);
	Pcout out2{ "Let's try something new!" };
	std::thread th5(&Pcout::print, &out2);
	//std::thread th5(pcout, "But dont know how to realize it");
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	th5.join();
		
	// ========================================== EXRSZ 2 ==========================================
	
	int iSimple = 0;
	int NomberOfSerchSimple;
	std::cout << "Enter nomber of searching simple: ";
	std::cin >> NomberOfSerchSimple;
	std::thread th6(SimpleNNombers, NomberOfSerchSimple, std::ref(iSimple));
	th6.join();
	std::cout << std::endl << "The " << NomberOfSerchSimple << "' simple nomber is: " << iSimple << std::endl;


	// ========================================== EXRSZ 3 ==========================================
	std::vector<int> vector1 { 0, 1, 2, 5 ,7 ,9 };
	PrintVec(vector1);
	std::thread th7(funcAdd, std::ref(vector1));
	std::thread th8(funcTake, std::ref(vector1));
	th8.join();
	th7.join();
	PrintVec(vector1);

}
