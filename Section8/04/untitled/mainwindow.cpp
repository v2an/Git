#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QFile>
#include <QDataStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QTranslator>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap bknd(":/resources/bg.jpg");
    //QPalette pal;
    //pal.setBrush(QPalette::Window, bknd);
    //setPalette(pal);
    ui->SaveButton->setText(tr("Save"));
    ui->OpenButton->setText(tr("Open"));
    ui->HelpButton->setText(tr("About"));
    ui->ROOpenButton->setText(tr("Open read only"));
    ui->TrText->setText(tr("Language:"));
    ui->TrEng->setText(tr("Eng"));
    ui->TrRus->setText(tr("Rus"));
}

struct HotKeys
{
    Qt::KeyboardModifier mod = Qt::ShiftModifier;
    Qt::Key open = Qt::Key_O;
    Qt::Key save = Qt::Key_S;
    Qt::Key exit = Qt::Key_Q;
    Qt::Key newdoc = Qt::Key_N;
};

HotKeys SetUPS = {Qt::ShiftModifier, Qt::Key_O, Qt::Key_S, Qt::Key_Q, Qt::Key_N};

MainWindow::~MainWindow()
{
    delete ui;
}

// ============================================================================================================================== Functions

void MainWindow::Save()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Text"), "", tr("Text file (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        out << ui->Editor->toPlainText();
    }
}

void MainWindow::Open()
{
    ui->Editor->setReadOnly(false);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Address Book"), "", tr("Text file (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else
    {
        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }

        QTextStream in(&file);
        ui->Editor->setPlainText(in.readAll());
    }
}
void MainWindow::About()
{
    dialog = new Dialog(this);
    dialog->show();
}

void MainWindow::Exit()
{
    qApp->closeAllWindows();
}

void MainWindow::New()
{
    ui->Editor->clear();
}

// ============================================================================================================================== Buttons

void MainWindow::on_OpenButton_clicked()
{
    Open();
}

void MainWindow::on_SaveButton_clicked()
{
    Save();
}

void MainWindow::on_HelpButton_clicked()
{
    About();
}


void MainWindow::on_ROOpenButton_clicked()
{
    Open();
    ui->Editor->setReadOnly(true);
}

void MainWindow::on_TrEng_clicked()
{
    transl.load(":/HW4_en");
    qApp->installTranslator(&transl);
    ui->retranslateUi(this);
}


void MainWindow::on_TrRus_clicked()
{
    transl.load(":/HW4_ru");
    qApp->installTranslator(&transl);
    ui->retranslateUi(this);
}

// ============================================================================================================================== Events

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == SetUPS.open && event->modifiers() == SetUPS.mod)
    {
        Open();
    }
    else if (event->key() == SetUPS.save && event->modifiers() == SetUPS.mod)
    {
        Save();
    }
    else if (event->key() == SetUPS.exit && event->modifiers() == SetUPS.mod)
    {
        Exit();
    }
    else if (event->key() == SetUPS.newdoc && event->modifiers() == SetUPS.mod)
    {
        New();
    }
}


void MainWindow::on_Setts_clicked()
{
    setwidg = new SettWindget(this);
    setwidg->show();
}

