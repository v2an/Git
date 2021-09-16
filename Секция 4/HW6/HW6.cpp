#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// ======================= EXRSZ 1 =======================
bool CheckSTR(std::string str)
{
    bool wrong = 0;
    for (char c : str)
    {
        if ((c < 48) || (c > 57))
        {
            wrong = 1;
            break;
        }
    }
    return wrong;
}

std::string NewSTR()
{
    string str;
    cout << "Error: enter only one int nomber. Reenter: ";
    cin >> str;
    return str;
}

int InputInt()
{
    int input;
    string myString;
    cout << "Enter one int nomber: ";
    cin >> myString;
    if (CheckSTR(myString) == 1)
        do
        {
            myString = NewSTR();
        } while (CheckSTR(myString) != 0);
    stringstream TString;
    TString << myString;
    TString >> input;
    return input;
}

// ======================= EXRSZ 2 =======================
template< class CharT, class Traits >
std::basic_ostream<CharT, Traits>& endll(std::basic_ostream<CharT, Traits>& os)
{
    os << '\n' << '\n';
    return os;
};

// ======================= EXRSZ 3 =======================

/*
class GenericPlayer
{

};

class Player : public GenericPlayer
{
private:
    string m_PlayerName;
public:
    virtual bool IsHitting() const
    {
        char answer;
        cout << m_PlayerName << ", do you want to take card? (Y/N)";
        cin >> answer;
        if ((answer == 'y') || (answer == 'Y'))
            return true;
        else
            return false;
    }
    void Win() const
    {
        cout << m_PlayerName << " is won!" << endl;
    }
    void Lose() const
    {
        cout << m_PlayerName << " is lose!" << endl;
    }
    void Push() const
    {
        cout << m_PlayerName << "  push!" << endl;
    }
};

    // ======================= EXRSZ 4 =======================

class House : public GenericPlayer
{
private:
    string HouseName = "House";
public:
    virtual bool IsHitting() const
    {
        if (GetTotal() <= 16)
            return true;
        else
            return false;
    }
    void FlipFirstCard()
    {
        if (!(m_Cards.empty()))
            m_Cards[0]->Flip();
        else
            cout << "Nothing to flip" << endl;
    }
};

    // ======================= EXRSZ 5 =======================

ostream& operator<< (ostream& out, const Card& aCard)
{

    const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
    const string SUITS[] = { "c", "d", "h", "s" };
    if (aCard.m_IsFaceUp)
    {
        out << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        out << "XX";
    }
    return out;
}
*/
int main()
{
    // ======================= EXRSZ 1 =======================
    /*      Эту реализацию нашёл в интернете, но так и не понял, как оно работает, поэтому написал своё
    int a;
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Error!" << endl;
    }
    */
    cout << InputInt() << endll;
    cout << "This is the" << endll << "End!";
}
