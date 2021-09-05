#include <iostream>

// ========================================== EXRSZ1 ==========================================


class Figure
{
public:
    virtual double area() = 0;
    virtual ~Figure()
    {
    };
};

class Parallelogram : public Figure
{
public:
    virtual double area() = 0;
    virtual ~Parallelogram()
    {
    };
};

class Circle : public Figure
{
public:
    double a, S;
    Circle()
    {
        a = 0;
        S = 0;
    };
    Circle(double a1) : a(a1), S(0)
    {
    };
    double area()
    {
        S = a * a * 3.1415926535;
        return S;
    }
    ~Circle() {
    };
};

class Rectangle : public Parallelogram
{
public:
    double a, b, S;
    Rectangle()
    {
        a = 0;
        S = 0;
        b = 0;
    };
    Rectangle(double a1, double b1) : a(a1), b(b1), S(0)
    {
    };
    double area()
    {
        S = a * b;
        return S;
    }
    ~Rectangle() {
    };
};

class Square : public Parallelogram
{
public:
    double a, S;
    Square()
    {
        a = 0;
        S = 0;
    };
    Square(double a1) : a(a1), S(0)
    {
    };
    double area()
    {
        S = a * a;
        return S;
    }
    ~Square() {
    };
};

class Rhombus : public Parallelogram
{
public:
    double a, b, S;
    Rhombus()
    {
        a = 0;
        S = 0;
        b = 0;
    };
    Rhombus(double a1, double b1) : a(a1), b(b1), S(0)
    {
    };
    double area()
    {
        S = a * b / 2;
        return S;
    }
    ~Rhombus() {
    };
};

// ========================================== EXRSZ2 ==========================================
class Car
{
public:
    std::string company, model;
    Car()
    {
        company = "None";
        model = "None";
    }
    Car(std::string comp, std::string mod) : company(comp), model(mod)
    {
        std::cout << "Model: " << model << std::endl << "Company: " << company << std::endl;
    };
    virtual ~Car() {};
};

class PassengerCar : virtual public Car
{
public:
    PassengerCar()
    {
        std::cout << "Passenger Car" << std::endl << std::endl;
    }
    PassengerCar(std::string comp, std::string mod) : Car(comp, mod)
    {
        std::cout << "Passenger Car" << std::endl << std::endl;
    };
    virtual ~PassengerCar() {};
};

class Bus : virtual public Car
{
public:
    Bus()
    {
        std::cout << "Bus" << std::endl << std::endl;
    }
    Bus(std::string comp, std::string mod) : Car(comp, mod)
    {
        std::cout << "Bus" << std::endl << std::endl;
    };
    virtual ~Bus() {};
};

class Minivan : public PassengerCar, public Bus
{
public:
    Minivan()
    {
        std::cout << "Minivan" << std::endl << std::endl;
    }
    Minivan(std::string comp, std::string mod) : Car(comp, mod)
    {
        std::cout << "Minivan" << std::endl << std::endl;
    };
    ~Minivan() {};
};

// ========================================== EXRSZ3 ==========================================
class Fraction
{
public:
    double chis, znam, z;
    ~Fraction() {
        std::cout << "Deleted!" << std::endl;
    };
    Fraction()
    {
        chis = 1;
        znam = 1;
        z = chis / znam;
    };
    Fraction(double c1, double z1) : chis(c1), znam(z1) {
        if (znam == 0)
        {
            std::cout << "Znam = 0! Enter new: " << std::endl;
            std::cin >> znam;
        }
        z = chis / znam;
    };
    void printFr()
    {
        std::cout << chis << "/" << znam << " = " << z << std::endl;
    }
    Fraction operator- () const
    {
        return Fraction(-chis, znam);
    }
    friend double operator+(Fraction& f1, Fraction& f2);
    friend double operator-(Fraction& f1, Fraction& f2);
    friend double operator*(Fraction& f1, Fraction& f2);
    friend double operator/(Fraction& f1, Fraction& f2);
    friend bool operator==(Fraction& f1, Fraction& f2);
    friend bool operator!=(Fraction& f1, Fraction& f2);
    friend bool operator>(Fraction& f1, Fraction& f2);
    friend bool operator<(Fraction& f1, Fraction& f2);
    friend bool operator>=(Fraction& f1, Fraction& f2);
    friend bool operator<=(Fraction& f1, Fraction& f2);

};

double operator+(Fraction& f1, Fraction& f2)
{
    return (f1.z + f2.z);
};

double operator-(Fraction& f1, Fraction& f2)
{
    return (f1.z - f2.z);
};

double operator*(Fraction& f1, Fraction& f2)
{
    return (f1.z * f2.z);
};

double operator/(Fraction& f1, Fraction& f2)
{
    return (f1.z / f2.z);
};

bool operator==(Fraction& f1, Fraction& f2)
{
    if (f1.z == f2.z)
        return true;
    else
        return false;
};

bool operator!=(Fraction& f1, Fraction& f2)
{
    if (f1.z != f2.z)
        return true;
    else
        return false;
};

bool operator<(Fraction& f1, Fraction& f2)
{
    if (f1.z < f2.z)
        return true;
    else
        return false;
};

bool operator>(Fraction& f1, Fraction& f2)
{
    if (f1.z > f2.z)
        return true;
    else
        return false;
};

bool operator<=(Fraction& f1, Fraction& f2)
{
    if (f1.z <= f2.z)
        return true;
    else
        return false;
};

bool operator>=(Fraction& f1, Fraction& f2)
{
    if (f1.z >= f2.z)
        return true;
    else
        return false;
};

// ========================================== EXRSZ4 ==========================================
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

int main()
{
    // ========================================== EXRSZ1 ==========================================
    std::cout << "========================================== EXRSZ1 ==========================================" << std::endl << std::endl;
    Square sqr1(3);
    Figure* fig1 = &sqr1;
    std::cout << fig1->area() << std::endl;
    Circle crcl1(3);
    Figure* fig2 = &crcl1;
    std::cout << fig2->area() << std::endl;
    Rhombus rmb1(3, 7);
    Figure* fig3 = &rmb1;
    std::cout << fig3->area() << std::endl;
    Rectangle rec1(3, 4);
    Figure* fig4 = &rec1;
    std::cout << fig4->area() << std::endl;

    // ========================================== EXRSZ2 ==========================================
    std::cout << "========================================== EXRSZ2 ==========================================" << std::endl << std::endl;
    Minivan Blag("Blag inc", "Blag MK1");
    Bus Mits("Mitsubishi", "Hueven");
    PassengerCar Citr("Citroen", "Paltava");

    // ========================================== EXRSZ3 ==========================================
    std::cout << "========================================== EXRSZ3 ==========================================" << std::endl << std::endl;
    Fraction fr1(7, 2);
    Fraction fr2(3, 4);
    fr1.printFr();
    fr2.printFr();
    double summ = fr1 + fr2;
    double min = fr1 - fr2;
    double pr = fr1 * fr2;
    double de = fr1 / fr2;
    Fraction obr = -fr1;
    obr.printFr();
    bool ravn = fr1 == fr2;
    bool men = fr1 < fr2;
    bool bol = fr1 > fr2;
    bool neravn = fr1 != fr2;
    bool menravn = fr1 <= fr2;
    bool bolravn = fr1 >= fr2;
    std::cout << "Summ: " << summ << std:: endl;
    std::cout << "Minus: " << min << std::endl;
    std::cout << "Multiply: " << pr << std::endl;
    std::cout << "Fraction: " << de << std::endl;
    std::cout << "fr1 = fr2?: " << ravn << std::endl;
    std::cout << "fr1 < fr2?: " << men << std::endl;
    std::cout << "fr1 > fr2?: " << bol << std::endl;
    std::cout << "fr1 != fr2?: " << neravn << std::endl;
    std::cout << "fr1 <= fr2?: " << menravn << std::endl;
    std::cout << "fr1 >= fr2?: " << bolravn << std::endl;

    // ========================================== EXRSZ4 ==========================================
    std::cout << "========================================== EXRSZ4 ==========================================" << std::endl << std::endl;
    Card c1(Tiles, Ace, false);
    std::cout << "Flip? " << c1.flip << std::endl;
    c1.Flip();
    std::cout << "Flip? " << c1.flip << std::endl;
    std::cout << "Value: " << c1.GetValue() << std::endl;
}
