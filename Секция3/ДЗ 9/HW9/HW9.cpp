#include <iostream>

using namespace std;

//===========================================================================================

struct queue
{
	int pr;
	int val;
};

const int SIZE = 10;
queue* Array[SIZE] = {};
int head;
int tail;
int items;

void initQueue()
{
	for (int i = 0; i < SIZE; i++)
	{
		Array[i] = NULL;
	}
	head = 0;
	tail = 0;
	items = 0;
}

void insert(int pr, int val)
{
	queue* node = (queue*)malloc(sizeof(queue));
	node->val = val;
	node->pr = pr;
	if (items == 0)
	{
		Array[tail] = node;
		tail++;
		items++;
	}
	else if (items == SIZE)
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		int indx = 0;
		indx = tail % SIZE;
		++tail;
		Array[indx] = node;
		items++;
	}
}

queue* DeleteFromQueue()
{
	int flag;
	if (items == 0)
		return NULL;
	else
	{
		int i = 0;
		int indx = 0;
		int indxMin = 0;
		int minid = 1000;
		queue* temp;
		for (i = head; i < tail; ++i)
		{
			indx = i % SIZE;
			if (Array[indx]->pr < minid)
			{
				minid = Array[indx]->pr;
				indxMin = indx;
			}
		}
		flag = indxMin % SIZE;
		temp = Array[flag];
		i = indxMin + 1;
		while (i <= tail)
		{
			Array[i-1] = Array[i];
			Array[i] = NULL;
			i++;
		}
		items--;
		tail--;
		return temp;
	}
}


void PrintQueue()
{
	cout << "[ ";
	for (int i = 0; i < SIZE; ++i)
	{
		if (Array[i] == NULL)
			cout << "[*, *] ";
		else
			cout << "[" << Array[i]->pr << ", " << Array[i]->val << "] ";
	}
	cout << " ]" << endl;
}

//===========================================================================================

const int SIZE2 = 1000;
int Stack[SIZE2];
int cursor = -1;

bool EnterYour10nomber(int data)
{
	do
	{
		Stack[++cursor] = data % 2;
		data = data / 2;
		if (data == 1)
			Stack[++cursor] = 1;
	} while (data > 1);
	return true;
}

int Printback()
{
	if (cursor != -1)
	{
		return Stack[cursor--];
	}
	else
	{
		cout << "Stack is empty";
		return -1;
	}
}

int main()
{
	//=======================================================================================Exrs 1
	cout << "========== EXRS 1 ==========" << endl;
	initQueue();
	insert(13, 30);
	insert(2, 45);
	insert(5, 50);
	insert(1, 35);
	insert(2, 90);
	insert(3, 60);
	insert(5, 70);
	insert(22, 47);
	insert(10, 37);
	insert(1, 33);
	PrintQueue();
	for (int i = 0; i < 5; ++i)
	{
		queue* n = DeleteFromQueue();
		cout << "pr = " << n->pr << ", val = " << n->val << endl;
	}
	PrintQueue();
	cout << endl;

	//========================================================================================Exrs 2
	// works with positive int nombers!
	cout << "========== EXRS 2 ==========" << endl;
	cout << "Enter your 10 integer nomber: ";
	int Nomber10 = 0;
	cin >> Nomber10;
	EnterYour10nomber(Nomber10);
	while (cursor != -1)
	{
		cout << Printback();
	}
}
