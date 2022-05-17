#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>
#include <QResource>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    translator.load(":/HW4_ru");
    a.installTranslator(&translator);
    QResource::registerResource("./resmy.rcc");
    MainWindow w;
    w.show();
    return a.exec();
}


