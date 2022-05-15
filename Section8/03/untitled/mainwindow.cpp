#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QFile>
#include <QDataStream>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bknd("C:/Users/v2an/Desktop/Files/bg.jpg");
    QPalette pal;
    pal.setBrush(QPalette::Window, bknd);
    setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::loadFromFile()
{
    /*
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Address Book"), "",
            tr("Address Book (*.abk);;All Files (*)"));
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

        QDataStream in(&file);
        in.setVersion(QDataStream::Qt_4_5);
        contacts.clear();   // clear existing contacts
        in >> contacts;
        if (contacts.isEmpty())
        {
                    QMessageBox::information(this, tr("No contacts in file"),
                        tr("The file you are attempting to open contains no contacts."));
        }
        else
        {
                QMap<QString, QString>::iterator i = contacts.begin();
                nameLine->setText(i.key());
                addressText->setText(i.value());
        }
    }

    updateInterface(NavigationMode);
    */
}

void MainWindow::on_SaveButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Save Text"), "",
            tr("Text file (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        out << ui->Editor->toPlainText();
    }
}


void MainWindow::on_OpenButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Address Book"), "",
            tr("Text file (*.txt);;All Files (*)"));
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


void MainWindow::on_HelpButton_clicked()
{
    dialog = new Dialog(this);
    dialog->show();

}

