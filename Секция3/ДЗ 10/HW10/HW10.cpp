#include <iostream>
#include <string>

//====================================================================================================================== EXRS 1
struct EX1Struct
{
    char dat;
    struct EX1Struct* next;
};

struct StructExrs1
{
    EX1Struct* head;
    int size;
};

void PrintNod1(EX1Struct* n)
{
    if (n == NULL)
    {
        std::cout << "[]";
        return;
    }
    std::cout << "[" << n->dat << "]";
}

void PrintStruct1(StructExrs1* str)
{
    EX1Struct* current = str->head;
    if (current == NULL)
    {
        PrintNod1(current);
    }
    else
    {
        do
        {
            PrintNod1(current);
            current = current->next;
        } while (current != NULL);
    }
    std::cout << "Size: " << str->size << std::endl;
}

void initStruct1(StructExrs1* str)
{
    str->head = NULL;
    str->size = 0;
}

void pop1(StructExrs1* str)
{
        str->head = str->head->next;
        str->size--;
}

void insert1(StructExrs1* str, char data)
{
    EX1Struct* SNew = (EX1Struct*)malloc(sizeof(EX1Struct));
    SNew->dat = data;
    SNew->next = NULL;

    EX1Struct* current = str->head;
    if (current == NULL)
    {
        str->head = SNew;
        str->size++;
        return;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = SNew;
        str->size++;
    }
}

void InitParentheses(StructExrs1* str1, std::string input)
{
    int n = input.size();
    char Parentheses[3][2] = { {'(', ')'}, {'[',']'}, {'{','}'} };
    for (int c = 0; c < n; c++)
    {
        if (input.at(c) == '(' || input.at(c) == ')' || input.at(c) == '[' || input.at(c) == ']' || input.at(c) == '{' || input.at(c) == '}')
        {
            insert1(str1, input.at(c));
        }
    }
    return;
}

void CheckParentheses(StructExrs1* str1)
{
    if ((str1->size % 2) != 0)
    {
        std::cout << "Wrong parentheses";
        return;
    }
    else if (str1->size == 0)
    {
        std::cout << "There is no any parentheses!";
        return;
    }
    else
    {
        EX1Struct* current = str1->head;
        char tempC;
        char Parentheses[3][2] = { {'(', ')'}, {'[',']'}, {'{','}'} };
        while (current != NULL)
        {
            for (int n = 0; n < 3; n++)
            {
                if (current->dat == Parentheses[n][0])
                {
                    EX1Struct* temp = current->next;
                    int Check = 0;
                    while (temp != NULL)
                    {
                        if (temp->dat == Parentheses[n][1])
                        {
                            Check = 1;
                        }
                        temp = temp->next;
                    }
                    if (Check != 1)
                    {
                        std::cout << "Wrong parentheses!!" << std::endl;
                        return;
                    }

                }
            }
            current = current->next;
        }
        std::cout << "All Ok!";
    }
}

//====================================================================================================================== EXRS 2
struct EX2Struct
{
    int dat;
	struct EX2Struct* next;
};

struct Struct
{
    EX2Struct* head;
    int size;
};

void initStruct(Struct* str)
{
    str->head = NULL;
    str->size = 0;
}

void insert(Struct* str, int data)
{
    EX2Struct *SNew = (EX2Struct*)malloc(sizeof(EX2Struct));
    SNew->dat = data;
    SNew->next = NULL;

    EX2Struct* current = str->head;
    if (current == NULL)
    {
        str->head = SNew;
        str->size++;
        return;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = SNew;
        str->size++;
    }
}

EX2Struct* Del(Struct* str, int data)
{
    EX2Struct* current = str->head;
    EX2Struct* pearent = NULL;
    if (current == NULL)
        return NULL;
    while (current->next != NULL && current->dat != data)
    {
        pearent = current;
        current = current->next;
    }
    if (current->dat != data)
        return NULL;
    if (current == str->head)
    {
        str->head = current->next;
        str->size--;
        return current;
    }
    pearent->next = current->next;
    str->size--;
    return current;
}

void PrintNod(EX2Struct* n)
{
    if (n == NULL)
    {
        std::cout << "[]";
        return;
    }
    std::cout << "[" << n->dat << "]";
}

void CopySrtct2(Struct* str1, Struct* str2)
{
    EX2Struct* current = str1->head;
    while (current != NULL)
    {
        EX2Struct* SNew = (EX2Struct*)malloc(sizeof(EX2Struct));
        SNew->dat = current->dat;
        SNew->next = NULL;
        EX2Struct* current2 = str2->head;
        if (current2 == NULL)
        {
            str2->head = SNew;
            str2->size++;
        }
        else
        {
            while (current2->next != NULL)
            {
                current2 = current2->next;
            }
            current2->next = SNew;
            str2->size++;
        }
        current = current->next;
    }

} 


void PrintStruct(Struct* str)
{
    EX2Struct* current = str->head;
    if (current == NULL)
    {
        PrintNod(current);
    }
    else
    {
        do
        {
            PrintNod(current);
            current = current->next;
        } while (current != NULL);
    }
    std::cout << "Size: " << str->size << std::endl;
}

//========================================================================================================== EXRS 3

struct EX3Struct
{
    int dat;
    struct EX3Struct* next;
};

struct StructExrs3
{
    EX3Struct* head;
    int size;
};

void initStruct3(StructExrs3* str)
{
    str->head = NULL;
    str->size = 0;
}

void insert3(StructExrs3* str, int data)
{
    EX3Struct* SNew = (EX3Struct*)malloc(sizeof(EX3Struct));
    SNew->dat = data;
    SNew->next = NULL;

    EX3Struct* current = str->head;
    if (current == NULL)
    {
        str->head = SNew;
        str->size++;
        return;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = SNew;
        str->size++;
    }
}

EX3Struct* Del3(StructExrs3* str, int data)
{
    EX3Struct* current = str->head;
    EX3Struct* pearent = NULL;
    if (current == NULL)
        return NULL;
    while (current->next != NULL && current->dat != data)
    {
        pearent = current;
        current = current->next;
    }
    if (current->dat != data)
        return NULL;
    if (current == str->head)
    {
        str->head = current->next;
        str->size--;
        return current;
    }
    pearent->next = current->next;
    str->size--;
    return current;
}

void PrintNod3(EX3Struct* n)
{
    if (n == NULL)
    {
        std::cout << "[]";
        return;
    }
    std::cout << "[" << n->dat << "]";
}

void ListSortCheck(StructExrs3* str)
{
    EX3Struct* current = str->head;
    EX3Struct* temp = (EX3Struct*)malloc(sizeof(EX3Struct));
    int checkAZ = 0;
    int checkZA = 0;

    if (str->size != 0)
    {
        temp->dat = current->dat;
        temp->next = current->next;
        current = current->next;
        while (current != NULL)
        {
            if (temp->dat < current->dat)
            {
                temp = current;
                current = current->next;
                checkAZ++;
            }
            else if (temp->dat > current->dat)
            {
                temp = current;
                current = current->next;
                checkZA++;
            }
            else if (temp->dat == current->dat)
            {
                temp = current;
                current = current->next;
                checkZA++;
                checkAZ++;
            }
        }
        if (checkZA == (str->size - 1))
        {
            std::cout << "List sorted Z to A" << std::endl;
        }
        else if (checkAZ == (str->size - 1))
        {
            std::cout << "List sorted A to Z" << std::endl;
        }
        else
        {
            std::cout << "It's unsorted list!" << std::endl;

        }

    }
    else
    {
        std::cout << "It's empty list!" << std::endl;
        return;
    }

}


void PrintStruct3(StructExrs3* str)
{
    EX3Struct* current = str->head;
    if (current == NULL)
    {
        PrintNod3(current);
    }
    else
    {
        do
        {
            PrintNod3(current);
            current = current->next;
        } while (current != NULL);
    }
    std::cout << "Size: " << str->size << std::endl;
}




int main()
{
    //=========================================================== EXRS 1
    std::cout << std::endl << "================EXRS 1===================" << std::endl;

    StructExrs1* str1 = (StructExrs1*)malloc(sizeof(StructExrs1));
    initStruct1(str1);
    std::cout << "Enter parenthesized expression: " << std::endl;
    std::string input;
    std::cin >> input;
    InitParentheses(str1, input);
    PrintStruct1(str1);
    CheckParentheses(str1);
    
    //=========================================================== EXRS 2
    std::cout << std::endl << "================EXRS 2===================" << std::endl;

    Struct* str2 = (Struct*)malloc(sizeof(Struct));
    initStruct(str2);
    insert(str2, 14);
    insert(str2, 17);
    insert(str2, 1);
    insert(str2, 35);
    insert(str2, 17);
    insert(str2, 4);
    PrintStruct(str2);
    Struct* str2_2 = (Struct*)malloc(sizeof(Struct));
    initStruct(str2_2);
    PrintStruct(str2_2);
    CopySrtct2(str2, str2_2);
    PrintStruct(str2_2);

    //=========================================================== EXRS 3
    std::cout << std::endl << "================EXRS 3===================" << std::endl;

    StructExrs3* str3 = (StructExrs3*)malloc(sizeof(StructExrs3));
    initStruct3(str3);
    insert3(str3, 10);
    insert3(str3, 9);
    insert3(str3, 6);
    insert3(str3, 5);
    insert3(str3, 3);
    insert3(str3, 1);
    PrintStruct3(str3);
    ListSortCheck(str3);
    
}