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

void MainWindow::on_FCopy_clicked()
{
    currFormat = ui->Editor->textCursor().charFormat();
}


void MainWindow::on_FPaste_clicked()
{
    ui->Editor->textCursor().setCharFormat(currFormat);
}


void MainWindow::on_ChFont_clicked()
{
    QFont font = ui->Editor->textCursor().charFormat().font();
    QFontDialog FDialog(font, this);
    bool b[] = {true};
    font = FDialog.getFont(b);
    if (b[0])
    {
        QTextCharFormat fEdit;
        fEdit.setFont(font);
        ui->Editor->textCursor().setCharFormat(fEdit);
    }
}



void MainWindow::on_ALeft_clicked()
{
    ui->Editor->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_AMiddle_clicked()
{
    ui->Editor->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_ARight_clicked()
{
    ui->Editor->setAlignment(Qt::AlignRight);
}

