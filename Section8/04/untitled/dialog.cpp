#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QTranslator translator;
    translator.load(":/HW4_en");
    qApp->installTranslator(&translator);
}

Dialog::~Dialog()
{
    delete ui;
}
