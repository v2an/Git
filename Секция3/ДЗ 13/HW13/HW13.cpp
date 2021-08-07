#include <iostream>
using namespace std;

struct StackNode
{
    int dat;
    StackNode* next;
};

struct Stack
{
    int size;
    StackNode* head;
};

void init(Stack* st)
{
    st->size = 0;
    st->head = nullptr;
}

void pushST(Stack* st, int dat)
{
    StackNode* tmp = new StackNode;
    if (tmp == nullptr)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    tmp->dat = dat;
    tmp->next = st->head;
    st->head = tmp;
    st->size++;
    return;
}

void popST(Stack* st)
{
    if (st->size == 0)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    StackNode* tmp = st->head;
    int data = st->head->dat;
    st->head = st->head->next;
    delete tmp;
    st->size--;
    return;
}

const int n = 6;
int matrix[n][n] = {
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 1},
    {0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0},
};
int visited[n] = { 0 };

void depthTraversStack(Stack* st, int start)
{
    int r;
    int current = start;
    pushST(st, start);
    cout << start << " ";
    visited[start] = 1;
    while (st->size != 0)
    {
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (matrix[st->head->dat][i] == 1 && visited[i] == 0)
            {
                pushST(st, i);
                visited[i] = 1;
                //cout << st->head << endl;
                cout << i << " ";
                check = 1;
                break;
            }

        }
        if (check == 0)
        {
            popST(st);
        }
        //cout << st->size << endl;
    }
}

// ================================================================== EXRS 2 ================================
const int n2 = 6;

int matrix2[n2][n2] = {
    {0, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0},
};

int visitedRecurse[n2] = { 0 };
int visitedRecurseCount[n2] = { 0 };
int visitedMatrix[n2] = { 0 };

void CountCheckMatrix()
{
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if ((matrix2[i][j] == 1) && (i != j))
            {
                visitedMatrix[i]++;
            }
        }
    }
}

void resetArr()
{
    for (int i = 0; i < n; i++)
    {
        visitedRecurse[i] = 0;
    }
}

void CountCheckRecurse(int st)
{
    int i;
    visitedRecurse[st] = 1;
    for (i = 0; i < n2; i++)
    {
        if ((i != st) && matrix2[st][i] == 1)
        {
            visitedRecurseCount[st]++;
        }
        if (matrix2[st][i] == 1 && !visitedRecurse[i])
        {
            CountCheckRecurse(i);
        }
    } 
}

int main()
{
    // ============================================================== EXRS 1 ================================
    cout << "================================ EXRS 1 ================================" << endl << endl;
    Stack* stack1 = new Stack;
    init(stack1);
    depthTraversStack(stack1, 2);
    /*
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            cout << i << " ";
    }
    */
    cout << endl;
    // ============================================================== EXRS 2 ================================
    cout << endl << "================================ EXRS 2 ================================" << endl << endl;
    int st = 1;
    CountCheckMatrix();
    for (int i = 0; i < n2; i++)
    {
        cout << (i+1) << " | ";
    }
    cout << endl << "Matrix output" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << visitedMatrix[i] << " | ";
    }
    cout << endl;
    CountCheckRecurse(st);
    resetArr();
    cout << "Recurse output" <<endl;
    for (int i = 0; i < n2; i++)
    {
        cout << visitedRecurseCount[i] << " | ";
    }


}
