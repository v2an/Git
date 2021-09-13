#include <iostream>
#include <string>
using namespace std;

// =================================== EXRSZ 1 ===================================

template <class T>
class Pair1
{
private:
    T a1;
    T a2;
public:
    Pair1() : a1(0), a2(0)
    {

    }
    Pair1(T t1, T t2) : a1(t1), a2(t2)
    {

    }
    T first()
    {
        return a1;
    }
    T second()
    {
        return a2;
    }
};

// =================================== EXRSZ 2 ===================================

template <class T1, class T2>
class Pair2
{
private:
    T1 a1;
    T2 a2;
public:
    Pair2() : a1(0), a2(0)
    {

    }
    Pair2(T1 t1, T2 t2) : a1(t1), a2(t2)
    {

    }
    T1 first()
    {
        return a1;
    }
    T2 second()
    {
        return a2;
    }
};

// =================================== EXRSZ 3 ===================================

template<class X>
class StringValuePair
{
private:
    string p_str;
    X p_a1;
public:
    StringValuePair() : p_str(0), p_a1(0)
    {

    }
    StringValuePair(string t1, X t2) : p_str(t1), p_a1(t2)
    {

    }
    string first()
    {
        return p_str;
    }
    X second()
    {
        return p_a1;
    }
};

// =================================== EXRSZ 4 ===================================

class GenericPlayer
{
private:
    string m_Name;
public:
    GenericPlayer()
    {
        m_Name = "Player";
    }
    GenericPlayer(string Name) : m_Name(Name)
    {

    }
    virtual bool IsHitting() = 0;
    bool IsBoosted()
    {
        if (IsHitting() == true)
            return false;
        else
            return true;
    }
    void Bust()
    {
        if (IsBoosted() == true)
            cout << m_Name << "'s hand overflow!" << endl;
        else
            return;
    }
};

int main()
{
    // =================================== EXRSZ 1 ===================================
    Pair1<int> p1(5, 7);
    std::cout << p1.first() << " " << p1.second() << std::endl;

    Pair1<double> p2(9.348, 7.7865);
    std::cout << p2.first() << " " << p2.second() << std::endl;

    // =================================== EXRSZ 2 ===================================
    Pair2<int, double> p3(5, 7.446);
    std::cout << p3.first() << " " << p3.second() << std::endl;

    Pair2<double, int> p4(9.348, 7);
    std::cout << p4.first() << " " << p4.second() << std::endl;

    // =================================== EXRSZ 3 ===================================
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
   

}
