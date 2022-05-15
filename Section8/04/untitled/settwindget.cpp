#include "settwindget.h"
#include "ui_settwindget.h"

SettWindget::SettWindget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettWindget)
{
    ui->setupUi(this);
}

SettWindget::~SettWindget()
{
    delete ui;
}

