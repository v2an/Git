#include "settwindget.h"
#include "ui_settwindget.h"
#include <QTranslator>
#include <QApplication>


SettWindget::SettWindget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettWindget)
{
    ui->setupUi(this);
}

QList<QKeySequence> RKeyBinds;
Qt::KeyboardModifier RModifierBind;

SettWindget::~SettWindget()
{
    delete ui;
}


//Qt::KeyboardModifier ModifierBind;

void SettWindget::ReciveData(QList<QKeySequence> &RecivedKeyBinds, Qt::KeyboardModifier &RecivedModifierBind, int Lang)
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
    RKeyBinds = RecivedKeyBinds;
    RModifierBind = RecivedModifierBind;
    ui->OpenCurr->setText(QKeySequence(RKeyBinds[0]).toString());
    ui->SaveCurr->setText(QKeySequence(RKeyBinds[1]).toString());
    ui->CloseCurr->setText(QKeySequence(RKeyBinds[2]).toString());
    ui->NewCurr->setText(QKeySequence(RKeyBinds[3]).toString());
    if (RModifierBind == Qt::ShiftModifier)
    {
        ui->ShiftChecker->setChecked(true);
        ui->AltChecker->setChecked(false);
    }
    else
    {
        ui->ShiftChecker->setChecked(false);
        ui->AltChecker->setChecked(true);
    }
}

// ================================================== Buttons set

void SettWindget::on_OpenApply_clicked()
{
    QKeySequence input = ui->OpenEdit->text();
    if (input.isEmpty())
        return;
    for (int i = 1; i < 4; i++)
    {
        if (input == RKeyBinds[i])
            return;
    }
    RKeyBinds[0] = input;
    ui->OpenCurr->setText(QKeySequence(RKeyBinds[0]).toString());
    ui->OpenEdit->clear();
}

void SettWindget::on_SaveApply_clicked()
{
    QKeySequence input = ui->SaveEdit->text();
    if (input.isEmpty())
        return;
    for (int i = 0; i < 4; i++)
    {
        if (i != 1)
            if (input == RKeyBinds[i])
                return;
    }
    RKeyBinds[1] = input;
    ui->SaveCurr->setText(QKeySequence(RKeyBinds[1]).toString());
    ui->SaveEdit->clear();
}

void SettWindget::on_CloseApply_clicked()
{
    QKeySequence input = ui->CloseEdit->text();
    if (input.isEmpty())
        return;
    for (int i = 0; i < 4; i++)
    {
        if (i != 2)
            if (input == RKeyBinds[i])
                return;
    }
    RKeyBinds[2] = input;
    ui->CloseCurr->setText(QKeySequence(RKeyBinds[2]).toString());
    ui->CloseEdit->clear();
}

void SettWindget::on_NewApply_clicked()
{
    QKeySequence input = ui->NewEdit->text();
    if (input.isEmpty())
        return;
    for (int i = 0; i < 3; i++)
    {
        if (input == RKeyBinds[i])
            return;
    }
    RKeyBinds[3] = input;
    ui->NewCurr->setText(QKeySequence(RKeyBinds[3]).toString());
    ui->NewEdit->clear();
}

// ================================================== Mod set

void SettWindget::on_ApplyMod_clicked()
{
    if (ui->ShiftChecker->isChecked())
        RModifierBind = Qt::ShiftModifier;
    else if (ui->AltChecker->isChecked())
        RModifierBind = Qt::AltModifier;
}

void SettWindget::onButtonApply()
{
    emit SendDataBack(RKeyBinds, RModifierBind);
}


void SettWindget::on_AppChange_clicked()
{
    connect(ui->AppChange, SIGNAL(clicked()), this, SLOT(onButtonApply()));
    connect(this, SIGNAL(SendDataBack(QList<QKeySequence>&,Qt::KeyboardModifier&)), parent(), SLOT(ReciveBack(QList<QKeySequence>&,Qt::KeyboardModifier&)));
}


void SettWindget::on_Reset_clicked()
{
    RKeyBinds = { Qt::Key_O, Qt::Key_S, Qt::Key_Q, Qt::Key_N };
    RModifierBind = Qt::ShiftModifier;
    ui->OpenCurr->setText(QKeySequence(RKeyBinds[0]).toString());
    ui->SaveCurr->setText(QKeySequence(RKeyBinds[1]).toString());
    ui->CloseCurr->setText(QKeySequence(RKeyBinds[2]).toString());
    ui->NewCurr->setText(QKeySequence(RKeyBinds[3]).toString());
    ui->ShiftChecker->setChecked(true);
    ui->AltChecker->setChecked(false);
    emit SendDataBack(RKeyBinds, RModifierBind);
    connect(this, SIGNAL(SendDataBack(QList<QKeySequence>&,Qt::KeyboardModifier&)), parent(), SLOT(ReciveBack(QList<QKeySequence>&,Qt::KeyboardModifier&)));
}

