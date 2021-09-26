#include <iostream>
#include <iomanip>
#include<memory>

template< class CharT, class Traits >
std::basic_ostream<CharT, Traits>& endll(std::basic_ostream<CharT, Traits>& os)
{
    os << '\n' << '\n';
    return os;
};

using namespace std;

// ======================================= EXRSZ 1 =======================================

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
    void setDay()
    {
        cout << "Enter" << endl << "Day (1-31): ";
        cin >> D_day;
        if (D_day > 31 || D_day < 1)
        {
            D_day = 1;
            cout << "You entered wrong day. Automatically setted at 1" << endl;
        }
        cout << "Month (1-12): ";
        cin >> D_month;
        if (D_month > 12 || D_month < 1)
        {
            D_month = 1;
            cout << "You entered wrong month. Automatically setted at 1" << endl;
        }
        cout << "Year: ";
        cin >> D_year;
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

shared_ptr<Date> Today_Day()
{
    shared_ptr<Date> today(new Date());
    today->setDay();
    cout << *today;
    cout << today->getDay() << endl;
    cout << today->getMonth() << endl;
    cout << today->getYear() << endl;
    shared_ptr<Date> day = today;
    if (today == nullptr)
        return nullptr;
    else
        return day;
}

// ======================================= EXRSZ 2 =======================================
shared_ptr<Date> DateCompare(const shared_ptr<Date> d1, const shared_ptr<Date> d2)
{
    if (d1->getYear() > d2->getYear())
        return d1;
    else if (d1->getYear() < d2->getYear())
        return d2;
    else
    {
        if (d1->getMonth() > d2->getMonth())
            return d1;
        else if (d1->getMonth() < d2->getMonth())
            return d2;
        else
        {
            if (d1->getDay() > d2->getDay())
                return d1;
            else if (d1->getDay() < d2->getDay())
                return d2;
            else
                return d1;
        }
    }
}

void DateExchange(shared_ptr<Date>& d1, shared_ptr<Date>& d2)
{
    shared_ptr<Date> temp;
    temp = d1;
    d1 = d2;
    d2 = temp;
    temp = nullptr;
}

// ======================================= EXRSZ 3 =======================================


int main()
{
    
    // ======================================= EXRSZ 1 =======================================
    cout << "======================================= EXRSZ 1 =======================================" << endll;
    Date d1(21, 2, 1995);
    cout << d1;
    shared_ptr<Date> day = Today_Day();
    cout << *day;
    
    // ======================================= EXRSZ 2 =======================================
    cout << "======================================= EXRSZ 2 =======================================" << endll;
    shared_ptr<Date> date1(new Date());
    shared_ptr<Date> date2(new Date());
    date1->setDay();
    date2->setDay();
    cout << *DateCompare(date1, date2) << endl;
    DateExchange(date1, date2);
    cout << *date1 << endll << *date2 << endl;

    // ======================================= EXRSZ 3 =======================================
    cout << "======================================= EXRSZ 3 =======================================" << endll;


}
