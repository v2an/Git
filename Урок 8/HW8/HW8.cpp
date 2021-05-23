#include <iostream>
#include <random>
#include <stdlib.h>
#include <chrono>

using namespace std;

enum FIELD
{
    EMPTY = '_',
    CROSS = 'X',
    CIRCLE = 'O'
};

enum GAME_RESOULT
{
    IN_PROGRESS,
    PLAYER_WON,
    AI_WON,
    DRAW
};

struct Field
{
    std::string PlayerName = "Player";
    const size_t FIELDSIZE = 3;
    size_t TurnCount = 0;
    FIELD** inField = nullptr;
    FIELD human;
    FIELD AI;
    GAME_RESOULT progress = IN_PROGRESS;
};

struct Coord
{
    size_t y = 0;
    size_t x = 0;
};

void clearScreen()
{
    system("cls");
}

int32_t getRandomNum(int32_t min, int32_t max)
{
    const static auto seed = chrono::system_clock::now().time_since_epoch().count();
    static mt19937_64 generator(seed);
    uniform_int_distribution<int32_t> dis(min, max);
    return dis(generator);
}

void printField(Field & iF)
{
    cout << endl;
    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        std::cout << ( y + 1 ) << " | ";
        for (size_t x = 0; x < iF.FIELDSIZE; x++)
        {
            std::cout << (char)iF.inField[y][x] << " | ";
        }
        std::cout << std::endl;
    }
    std::cout << "    1   2   3  " << endl << endl;
    cout << iF.PlayerName << ": " << (char)iF.human << endl;
    cout << "AI: " << (char)iF.AI << endl;
}


void initField(Field & iF)
{
    iF.inField = new (std::nothrow) FIELD * [iF.FIELDSIZE];
    for (size_t i = 0; i < iF.FIELDSIZE; i++)
    {
        iF.inField[i] = new FIELD [iF.FIELDSIZE];
    }
    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        for (size_t x = 0; x < iF.FIELDSIZE; x++)
        {
            iF.inField[y][x] = EMPTY;
        }
    }
    if (getRandomNum(0, 1000) > 500)
    {
        iF.TurnCount = 0;
        iF.human = CROSS;
        iF.AI = CIRCLE;
    }
    else
    {
        iF.TurnCount = 1;
        iF.human = CIRCLE;
        iF.AI = CROSS;
    }
}



void deinitField(Field& iF)
{
    for (size_t i = 0; i < iF.FIELDSIZE; i++)
    {
        delete [] iF.inField[i];
    }
    delete[] iF.inField;
    iF.inField = nullptr;
}


GAME_RESOULT resoult(const Field& iF)
{
    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        if (iF.inField[y][0] == iF.inField[y][1] && iF.inField[y][0] == iF.inField[y][2])
        {
            if (iF.inField[y][0] == iF.human)
                return PLAYER_WON;
            else if (iF.inField[y][0] == iF.AI)
                return AI_WON;
        }
    }
    for (size_t x = 0; x < iF.FIELDSIZE; x++)
    {
        if (iF.inField[0][x] == iF.inField[1][x] && iF.inField[0][x] == iF.inField[2][x])
        {
            if (iF.inField[0][x] == iF.human)
                return PLAYER_WON;
            else if (iF.inField[0][x] == iF.AI)
                return AI_WON;
        }
    }
    if (iF.inField[0][0] == iF.inField[1][1] && iF.inField[0][0] == iF.inField[2][2])
    {
        if (iF.inField[0][0] == iF.human)
            return PLAYER_WON;
        else if (iF.inField[0][0] == iF.AI)
            return AI_WON;
    }
    if (iF.inField[0][2] == iF.inField[1][1] && iF.inField[0][2] == iF.inField[2][0])
    {
        if (iF.inField[0][2] == iF.human)
            return PLAYER_WON;
        else if (iF.inField[0][2] == iF.AI)
            return AI_WON;
    }

    int Prog = 0;
    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        for (size_t x = 0; x < iF.FIELDSIZE; x++)
        {
            if (iF.inField[y][x] == EMPTY)
            {
                Prog++;
                break;
            }
        }
    }
    if (Prog != 0)
        return IN_PROGRESS;
    else
        return DRAW;
}

Coord getHumanCoord(Field& iF)       
{
    Coord c;
    do
    {
        cout << "Enter y coord(1..3): ";
        cin >> c.y;
        cout << "Enter x coord(1..3): ";
        cin >> c.x;
    } while (c.x > 3 || c.y > 3 || c.x < 1 || c.y < 1 || iF.inField[c.y-1][c.x-1] != EMPTY);
    c.x--;
    c.y--;
    return c;
}

Coord getAICoord(Field& iF)
{
    Coord c;

    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        for (size_t x = 0; x < iF.FIELDSIZE; x++)
        {
            if (iF.inField[y][x] == EMPTY)
            {
                iF.inField[y][x] = iF.AI;
                if (resoult(iF) == AI_WON)
                {
                    iF.inField[y][x] = EMPTY;
                    return { y, x };
                }
                else
                {
                    iF.inField[y][x] = EMPTY;
                }
            }

        }
    }

    for (size_t y = 0; y < iF.FIELDSIZE; y++)
    {
        for (size_t x = 0; x < iF.FIELDSIZE; x++)
        {
            if (iF.inField[y][x] == EMPTY)
            {
                iF.inField[y][x] = iF.human;
                if (resoult(iF) == PLAYER_WON)
                {
                    iF.inField[y][x] = EMPTY;
                    return { y, x };
                }
                else
                {
                    iF.inField[y][x] = EMPTY;
                }
            }
        }
    }

    if (iF.inField[1][1] == EMPTY)
    {
        return { 1, 1 };
    }
    if (iF.inField[0][0] == EMPTY)
    {
        return { 0, 0 };
    }
    if (iF.inField[0][2] == EMPTY)
    {
        return { 0, 2 };
    }
    if (iF.inField[2][0] == EMPTY)
    {
        return { 2, 0 };
    }
    if (iF.inField[2][2] == EMPTY)
    {
        return { 2, 2 };
    }



    if (iF.inField[0][1] == EMPTY)
    {
        return { 0, 1 };
    }
    if (iF.inField[1][0] == EMPTY)
    {
        return { 1, 0 };
    }
    if (iF.inField[2][1] == EMPTY)
    {
        return { 2, 1 };
    }
    if (iF.inField[1][2] == EMPTY)
    {
        return { 1, 2 };
    }

    return c;
}

int main()
{
    Field F;
    cout << "Enter Player name: ";
    cin >> F.PlayerName;

    initField(F);
    printField(F);

    do
    {

        if (F.TurnCount % 2 == 0)
        {
            Coord c = getHumanCoord(F);
            F.inField[c.y][c.x] = F.human;
        }
        else
        {
            Coord c = getAICoord(F);
            F.inField[c.y][c.x] = F.AI;
        }

        clearScreen();
        printField(F);

        F.TurnCount++;
        F.progress = resoult(F);
     
    }     while (F.progress == IN_PROGRESS);


    if (F.progress == PLAYER_WON)
    {
        cout << "Congrads, " << F.PlayerName << "! You won!!" << endl;
    }
    else if (F.progress == AI_WON)
    {
        cout << "Ai won! Try again!" << endl;
    }
    else if (F.progress == DRAW)
    {
        cout << "Em...bro, it's draw...try again!" << endl;
    }

    deinitField(F);
    return 0;
}