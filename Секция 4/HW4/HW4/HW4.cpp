#include <iostream>
#include <vector>
#include <cassert>

// ===================== EXRSZ 1 =====================
class ArrayInt
{
private:
	int mlength;
	int* mdata;
public:
	ArrayInt() : mlength(0), mdata(nullptr)
	{
	}
	ArrayInt(int len) : mlength(len)
	{
		assert(len >= 0);
		if (len > 0)
		{
			mdata = new int[len];
			for (int i = 0; i < len; i++)
			{
				std::cout << "Enter value of " << i+1 << " element of array: ";
				std::cin >> mdata[i];
			}
		}
		else
		{
			mdata = nullptr;
		}
	}


	void erase()
	{
		delete[] mdata;
		mdata = nullptr;
		mlength = 0;
	}
	int getLenght()
	{
		return mlength;
	}
	int& operator[](int index)
	{
		assert(index >= 0 && index < mlength);
		return mdata[index];
	}
	void resize(int newmlength)
	{
		if (newmlength == mlength)
			return;
		if (newmlength <= 0)
		{
			erase();
			return;
		}
		int* data = new int[newmlength];
		if (mlength > 0)
		{
			int elementsToCopy = (newmlength > mlength) ? mlength : newmlength;
			for (int index = 0; index < elementsToCopy; ++index)
				data[index] = mdata[index];
		}
		delete[] mdata;
		mdata = data;
		mlength = newmlength;
	}
	void insertBefore(int value, int index)
	{
		assert(index >= 0 && index <= mlength);
		int* data = new int[mlength + 1];
		for (int before = 0; before < index; ++before)
			data[before] = mdata[before];
		data[index] = value;
		for (int after = index; after < mlength; ++after)
			data[after + 1] = mdata[after];
		delete[] mdata;
		mdata = data;
		++mlength;
	}
	void push_back(int value)
	{
		insertBefore(value, mlength);
	}
	void pop_back()
	{
		if (mlength <= 0)
		{
			std::cout << "Error, array lenght is 0";
			return;
		}
		int* data = new int[mlength - 1];
		for (int i = 0; i < (mlength - 1); i++)
		{
			data[i] = mdata[i];
		}
		delete[] mdata;
		mdata = data;
		--mlength;
	}
	void pop_front()
	{
		if (mlength <= 0)
		{
			std::cout << "Error, array lenght is 0" << std::endl;
			return;
		}
		int* data = new int[mlength - 1];
		for (int i = 0; i < (mlength - 1); i++)
		{
			data[i] = mdata[i+1];
		}
		delete[] mdata;
		mdata = data;
		--mlength;
	}
	void ArraySort()
	{
		int temp = 0;
		for (int i = 0; i < mlength; i++)
		{
			for (int j = 0; j < (mlength - 1); j++)
			{
				if (mdata[j] > mdata[j + 1])
				{
					temp = mdata[j];
					mdata[j] = mdata[j + 1];
					mdata[j + 1] = temp;
				}
			}
		}
	}
	void printArray()
	{
		if (mlength <= 0)
		{
			std::cout << "Array is empty" << std::endl;
			return;
		}
		for (int i = 0; i < mlength; i++)
		{
			std::cout << i+1 << " element of array is " << mdata[i] << std::endl;
		}
		std::cout << std::endl;
	}
};

// ===================== EXRSZ 2 =====================
int vectorUnicIntCheck(const std::vector<int>& arr)
{
	int n = arr.size();
	int* arrT = new int[n];
	int countI = 0;
	for (int i = 0; i < n; i++)
	{
		arrT[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (arrT[i] == 0)
		{
			int temp = arr[i];
			for (int j = i; j < n; j++)
			{
				if (temp == arr[j])
				{
					arrT[j] = 1;
				}
			}
			countI++;
		}
	}
	return countI;
}

// ===================== EXRSZ 3 =====================
enum Suit { Hearts, Tiles, Clovers, Pikes };
enum CardVal { one, two, three, four, five, six, seven, eight, nine, ten, Val, Dam, King, Ace };

class Card
{
public:
	bool flip;
	Suit suit;
	CardVal val;
	Card()
	{
		suit = Hearts;
		val = one;
		flip = false;
	}
	Card(Suit s1, CardVal v1, bool f1) : suit(s1), val(v1), flip(f1) {
	};
	void Flip()
	{
		if (flip == true)
			flip = false;
		else
			flip = true;
	};
	int GetValue()
	{
		if (val > 9 && val != 13)
		{
			return 10;
		}
		else if (val == 13)
		{
			return 1;
		}
		else
		{
			return (val + 1);
		}
	}
};

class Hand : public Card
{
private:
	std::vector<Card*> mHand;
public:
	//add
	void Add(Card *newCard)
	{
		mHand.push_back(newCard);
	}
	void Clear()
	{
		mHand.clear();
	}
	int GetValue()
	{
		int r = 0;
		for (int i = 0; i < mHand.size(); i++)
		{
			Card Q = *mHand[i];
			if (Q.val == Ace && r <= 21)
			{
				r = r + 11;
			}
			else
			{
				r = r + Q.GetValue();
			}
		}
		return r;
	}
};

int main()
{
	// ===================== EXRSZ 1 =====================
	std::cout << " ===================== EXRSZ 1 ===================== " << std::endl << std::endl; // это задание без проблем. Ну, сортировку можно было бы более сложную и быструю сделать, это да...
	ArrayInt arr1(8);
	arr1.printArray();
	arr1.resize(7);
	arr1.printArray();
	arr1.pop_back();
	arr1.printArray();
	arr1.pop_front();
	arr1.printArray();
	arr1.ArraySort();
	arr1.printArray();

	// ===================== EXRSZ 2 =====================
	std::cout << " ===================== EXRSZ 2 ===================== " << std::endl << std::endl;
	std::vector<int> arr2 = { 8, 4, 8, 5, 8, 4, 8, 4, 7 }; // вектор для теста
	std::cout << vectorUnicIntCheck(arr2) << std::endl;    // может и можно сделать более быстрый анализ, но я что-то не додумался

	// ===================== EXRSZ 3 =====================
	std::cout << " ===================== EXRSZ 3 ===================== " << std::endl << std::endl; // все, что ниже исключительно для теста работоспособности методов
	Card a1(Tiles, Dam, 0);
	Card a2(Tiles, eight, 0);
	Card a3(Tiles, Ace, 0);
	Card a4(Tiles, Ace, 0);
	Hand h1;
	h1.Add(&a1);
	h1.Add(&a2);
	std::cout << h1.GetValue() << std::endl;
	h1.Add(&a3);
	std::cout << h1.GetValue() << std::endl;
	h1.Add(&a4);
	std::cout << h1.GetValue() << std::endl;

}