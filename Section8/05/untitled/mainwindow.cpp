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

    setwidg = new SettWindget(this);
    connect(ui->Setts, SIGNAL(clicked()), setwidg, SLOT(show()));
    connect(ui->Setts, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(SendData(QList<QKeySequence>&,Qt::KeyboardModifier&,int)), setwidg, SLOT(ReciveData(QList<QKeySequence>&,Qt::KeyboardModifier&,int)));
    qApp->setStyleSheet("QPushButton{font: bold 14 px; color: #DCDCDC; background-color: #505050; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #787878;}"
                        "QPushButton:pressed{background-color: #696969;}"
                        "QMainWindow{background-color: #303030;}"
                        "QDialog{background-color: #303030;}"
                        "QSettWindget{background-color: #303030;}"
                        "QPlainTextEdit{background-color: #505050; color: #DCDCDC;}"
                        "QLineEdit{background-color: #505050; color: #DCDCDC;}"
                        "QTreeView{background-color: #505050; color: #DCDCDC;}"
                        "QHeaderView::section{background-color: #505050; color: #DCDCDC;}"
                        "QLabel{color: #DCDCDC;}"
                        "QRadioButton{color: #DCDCDC;}"
                        "QTextBrowser{background-color: #505050; color: #DCDCDC;}");
    currtheme = 1; // 1 - black, 2 - white
    ui->ThemeChange->setText(tr("White"));
}

QList<QKeySequence> KeyBinds = { Qt::Key_O, Qt::Key_S, Qt::Key_Q, Qt::Key_N };
Qt::KeyboardModifier ModifierBind = Qt::ShiftModifier;
int Language = 1; //1 - Ru, 2 - En

//QString str = "Ololololo";  < test message xP


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
    else
    {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        out << ui->Editor->toPlainText();
        QChar last = fileName.back();
        while (last != '/')
        {
            fileName.chop(1);
            last = fileName.back();
        }
        fileName.chop(1);
        currfolder = fileName;
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
        QChar last = fileName.back();
        while (last != '/')
        {
            fileName.chop(1);
            last = fileName.back();
        }
        fileName.chop(1);
        currfolder = fileName;
    }
}
void MainWindow::About()
{
    dialog = new Dialog(this);
    emit SendLang(Language);
    connect(this, SIGNAL(SendLang(int)), dialog, SLOT(ReciveLang(int)));
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
    Language = 2;
    if (currtheme == 2)
    {
        ui->ThemeChange->setText(tr("Black"));
    }
    else
    {
        ui->ThemeChange->setText(tr("White"));
    }
}


void MainWindow::on_TrRus_clicked()
{
    transl.load(":/HW4_ru");
    qApp->installTranslator(&transl);
    ui->retranslateUi(this);
    Language = 1;
    if (currtheme == 2)
    {
        ui->ThemeChange->setText(tr("Black"));
    }
    else
    {
        ui->ThemeChange->setText(tr("White"));
    }
}

// ============================================================================================================================== Events

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (QKeySequence(event->key()) == KeyBinds[0] && event->modifiers() == ModifierBind)
    {
        Open();
    }
    else if (QKeySequence(event->key()) == KeyBinds[1] && event->modifiers() == ModifierBind)
    {
        Save();
    }
    else if (QKeySequence(event->key()) == KeyBinds[2] && event->modifiers() == ModifierBind)
    {
        Exit();
    }
    else if (QKeySequence(event->key()) == KeyBinds[3] && event->modifiers() == ModifierBind)
    {
        New();
    }
}

void MainWindow::onButtonSend()
{
    emit SendData(KeyBinds, ModifierBind, Language);
}

void MainWindow::ReciveBack(QList<QKeySequence> &RKeyBinds, Qt::KeyboardModifier &RModifierBind)
{
    KeyBinds = RKeyBinds;
    ModifierBind = RModifierBind;
}

/*
void MainWindow::on_Setts_clicked()
{
    setwidg = new SettWindget(this);
    connect(this, SIGNAL(SendData(KeyBinds,ModifierBind)), setwidg, SLOT(ReciveData(QList<Qt::Key>,Qt::KeyboardModifier)));
    setwidg->show();
}
*/

void MainWindow::on_ThemeChange_clicked()
{
    if (currtheme == 1)
    {
        qApp->setStyleSheet("QPushButton{background-color: #E0E0E0; font: bold 14 px; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #A9A9A9;}"
                            "QPushButton:pressed{background-color: #A9A9A9;}");
        currtheme = 2;
        ui->ThemeChange->setText(tr("Black"));
    }
    else
    {
        qApp->setStyleSheet("QPushButton{font: bold 14 px; color: #DCDCDC; background-color: #505050; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #787878;}"
                            "QPushButton:pressed{background-color: #696969;}"
                            "QMainWindow{background-color: #303030;}"
                            "QDialog{background-color: #303030;}"
                            "QSettWindget{background-color: #303030;}"
                            "QPlainTextEdit{background-color: #505050; color: #DCDCDC;}"
                            "QLineEdit{background-color: #505050; color: #DCDCDC;}"
                            "QTreeView{background-color: #505050; color: #DCDCDC;}"
                            "QHeaderView::section{background-color: #505050; color: #DCDCDC;}"
                            "QLabel{color: #DCDCDC;}"
                            "QRadioButton{color: #DCDCDC;}"
                            "QTextBrowser{background-color: #505050; color: #DCDCDC;}");
        currtheme = 1;
        ui->ThemeChange->setText(tr("White"));
    }
}


void MainWindow::on_CurrFolderButton_clicked()
{
    fldvew = new FolderVewer(this, currfolder);
    emit SendLang(Language);
    connect(this, SIGNAL(SendLang(int)), fldvew, SLOT(ReciveLang(int)));
    fldvew->show();
}

