#include <iostream>
using namespace std;

// ============================== EXRSZ 1 ==============================

template<typename Q>
Q div1(Q n1, Q n2)
{
    if (n2 == 0)
        throw 0;
    Q qwerty = n1 / n2;
    return qwerty;
}

// ============================== EXRSZ 2 ==============================
class Ex
{
public:
    float x;
    Ex() : x(0)
    {

    };
    Ex(float t) : x(t)
    {

    };
};

class Bar
{
private:
    float y;
public:
    Bar() : y(0)
    {

    };
    float set(float a)
    {
        if (y + a > 100)
            throw Ex(a * y);
        else
            y = a;
    }
};

// ============================== EXRSZ 3 ==============================
class Robotto
{
private:
    int x, y, fX, fY;
public:
    Robotto() : x(1), y(1)
    {

    }
    Robotto(int zx, int zy, int tx, int ty) : x(zx), y(zy), fX(tx), fY(ty)
    {
        if (zx > tx || zy > tx || zx < 1 || zy < 1)
            throw string("Incorrect starting position");
    }
    void Move(char C)
    {
        if (C == 'L' || C == 'l')
            x = x - 1;
        else if (C == 'R' || C == 'r')
            x = x + 1;
        else if (C == 'U' || C == 'u')
            y = y - 1;
        else if (C == 'D' || C == 'd')
            y = y + 1;
        else
            throw string("Incorrect direction");
        if (x < 1 || x > fX || y < 1 || y > fY)
            throw string("Off the field");
    }
    int takeX()
    {
        return x;
    }
    int takeY()
    {
        return y;
    }
};

void PrintField(int x, int y, Robotto& Rob)
{
    cout << endl;
    for (int i = 1; i <= y; i++)
    {
        cout << "  |";
        for (int j = 1; j <= x; j++)
        {
            if (j == Rob.takeX() && i == Rob.takeY())
                cout << " x |";
            else
                cout << " _ |";
        }
        cout << endl;
    }
}

int main()
{
    // ============================== EXRSZ 1 ==============================
    cout << "// ============================== EXRSZ 1 ==============================" << endl << endl;
    try
    {
        cout << "Enter two nombers: ";
        float n1, n2;
        cin >> n1 >> n2;
        cout << div1(n1, n2) << endl;
    }
    catch (int N)
    {
        cerr << "Throw was initiated by divinyd by " << N << endl;
    }

    // ============================== EXRSZ 2 ==============================
    cout << endl << "// ============================== EXRSZ 2 ==============================" << endl << endl;
    Bar EXRSZ2 = Bar();
    try
    {
        cout << "Enter any nomber: ";
        float n;
        cin >> n;
        while (n != 0)
        {
            EXRSZ2.set(n);
            cout << "Enter any nomber: ";
            cin >> n;
        }
    }
    catch (Ex B)
    {
        cout << "Error: a * y = " << B.x << endl;
    }
    
    // ============================== EXRSZ 3 ==============================
    cout << endl << "// ============================== EXRSZ 3 ==============================" << endl << endl;
    int x, y, zx, zy;
    cout << "Enter size of field: " << endl << "x = ";
    cin >> x;
    cout << "y = "; 
    cin >> y;
    cout << "You want to set starting position? (if No, it will set by default (1, 1)) (Y/N): ";
    char oops;
    cin >> oops;
    if (oops == 'Y' || oops == 'y')
    {
        cout << "Enter start position: " << endl << "x = ";
        cin >> zx;
        cout << "y = ";
        cin >> zy;
    }
    else
    {
        zx = 1;
        zy = 1;
    }
    try
    {
        Robotto r2d2 = Robotto(zx, zy, x, y);
        bool check = true;
        while (check == true)
        {
            try
            {
                cout << "\x1B[2J\x1B[H";
                PrintField(x, y, r2d2);
                cout << "Where you plan to go? (L, R, U, D): ";
                char direction;
                cin >> direction;
                r2d2.Move(direction);
            }
            catch (string K)
            {
                check = false;
                throw;
            }
        }
    }
    catch (string K)
    {
        cout << "Error: " << K << endl;
    }
}
