#include "hw2mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HW2MainWindow w;
    w.show();
    return a.exec();
}
