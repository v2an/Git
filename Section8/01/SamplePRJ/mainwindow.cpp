#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CalculateButton_clicked()
{
    qint32 AValue = ui->AInput->text().toInt();
    qint32 BValue = ui->BInput->text().toInt();
    qint32 CValue = ui->CInput->text().toInt();

    if (AValue == 0 && BValue == 0 && CValue == 0)
    {
        ui->SituationDisplay->setText("Бесконечное множество!");
        ui->Answ1Display->setText("");
        ui->Answ2Display->setText("");
        return;
    }
    else if (AValue == 0 && BValue == 0 && CValue != 0)
    {
        ui->SituationDisplay->setText("Быть не может!!!");
        ui->Answ1Display->setText("");
        ui->Answ2Display->setText("");
        return;
    }
    else if (AValue == 0)
    {
        qint32 XValue = (-CValue)/(BValue);
        ui->SituationDisplay->setText("Один корень:");
        ui->Answ1Display->setText(QString::number(XValue));
        ui->Answ2Display->setText("");
        return;
    }


    qint32 DValue = BValue*BValue - 4 * AValue * CValue;

    if (DValue < 0)
    {
        ui->SituationDisplay->setText("Нет корней!");
        ui->Answ1Display->setText("");
        ui->Answ2Display->setText("");
    }
    else if (DValue == 0)
    {
        qint32 XValue = (-BValue)/(2*AValue);
        ui->SituationDisplay->setText("Один корень:");
        ui->Answ1Display->setText(QString::number(XValue));
        ui->Answ2Display->setText("");
    }
    else if (DValue > 0)
    {
        qint32 XValue1 = (-BValue + qSqrt(DValue))/(2*AValue);
        qint32 XValue2 = (-BValue - qSqrt(DValue))/(2*AValue);
        ui->SituationDisplay->setText("Два корня:");
        ui->Answ1Display->setText(QString::number(XValue1));
        ui->Answ2Display->setText(QString::number(XValue2));
    }

}


void MainWindow::on_CSideCalculate_clicked()
{
    qreal AValue = ui->ASideValue->text().toDouble();
    qreal BValue = ui->BSideValue->text().toDouble();
    float AngleValue = ui->AngleValue->text().toFloat();
    qreal CValue = 0.00;
    qreal cosinus;
    if (ui->CheckDegrees->isChecked()) {
        cosinus = qCos(qDegreesToRadians(AngleValue));
    }
    else {
            cosinus = qCos(AngleValue);
    }
    CValue = qSqrt((AValue * AValue) + (BValue * BValue) - (2 * AValue * BValue * cosinus));
    ui->CSideValue->setText(QString::number(CValue));
}

void MainWindow::on_AddButton_clicked()
{
    QString input = ui->InputWindow->toPlainText();
    QString newtext = ui->OutputWindow->toPlainText();
    newtext = newtext + input;
    ui->OutputWindow->setPlainText(newtext);
}

void MainWindow::on_OverrideButton_clicked()
{
    QString input = ui->InputWindow->toPlainText();
    ui->OutputWindow->setPlainText(input);
}


void MainWindow::on_EditAddButton_clicked()
{
    QString input = "<font colot='blue'>Chebureki <b>rulyat</b>!</font>";
    ui->OutputWindow->setHtml(input);
}

