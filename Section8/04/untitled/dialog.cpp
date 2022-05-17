#include "dialog.h"
#include "ui_dialog.h"
#include <QTranslator>
#include <QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::ReciveLang(int Lang)
{
    if (Lang == 1)
    {
        transl.load(":/HW4_ru");
        qApp->installTranslator(&transl);
        ui->retranslateUi(this);
    }
    else if (Lang == 2)
    {
        transl.load(":/HW4_en");
        qApp->installTranslator(&transl);
        ui->retranslateUi(this);
    }
}
