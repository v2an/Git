#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    int D_day, D_month, D_year;
public:
    Date() : D_day(1), D_month(1), D_year(1995)
    {

    }
    Date(int d, int m, int y) : D_day(d), D_month(m), D_year(y)
    {

    }
    int getDay()
    {
        return D_day;
    }
    int getMonth()
    {
        return D_month;
    }
    int getYear()
    {
        return D_year;
    }
    friend ostream& operator<< (ostream& out, const Date& date);
};

ostream& operator<< (ostream& out, const Date& date)
{
    if (date.D_day < 10 && !(date.D_month < 10))
        out << "Date:" << endl << "0" << date.D_day << "." << date.D_month << "." << date.D_year << "y." << endl;
    else if (date.D_month < 10 && !(date.D_day < 10))
        out << "Date:" << endl << date.D_day << "." << "0" << date.D_month << "." << date.D_year << "y." << endl;
    else if (date.D_day < 10 && date.D_month < 10)
        out << "Date:" << endl << "0" << date.D_day << "." << "0" << date.D_month << "." << date.D_year << "y." << endl;
    else
        out << "Date:" << endl << date.D_day << "." << date.D_month << "." << date.D_year << "y." << endl;
    return out;
}

template<class >

int main()
{
    Date d1(21, 2, 1995);
    cout << d1;
    return 0;
}
