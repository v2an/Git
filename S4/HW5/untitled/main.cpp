#include <QCoreApplication>
#include <iostream>

template <class T>
class Pair1
{
private:
    T a1;
    T a2;
public:
    Pair1(): a1(0), a2(0)
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



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Pair1<int> p1(6,9);
    std::cout << p1.first() << " " << p1.second() << std::endl;




    return a.exec();
}
